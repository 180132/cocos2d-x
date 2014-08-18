/****************************************************************************
 Copyright (c) 2013 cocos2d-x.org
 
 http://www.cocos2d-x.org
 
 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:
 
 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.
 
 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#ifndef _LIGHT_TEST_H_
#define _LIGHT_TEST_H_

#include "../testBasic.h"
#include "../BaseTest.h"

class LightTestDemo : public BaseTest
{
public:
    LightTestDemo();
    virtual ~LightTestDemo();

    virtual std::string title() const;
    virtual std::string subtitle() const;

    virtual void restartCallback(Ref* sender);
    virtual void nextCallback(Ref* sender);
    virtual void backCallback(Ref* sender);

    virtual void onEnter() override;
    virtual void onExit() override;
};

class PointLightTestDemo : public LightTestDemo
{
public:
    CREATE_FUNC(PointLightTestDemo);
    PointLightTestDemo();
    virtual ~PointLightTestDemo();

    virtual std::string title() const;

    virtual void update(float delta);

private:

    void addSprite();
    void addLights();

private:
    Light3D *_pointLight;
};

class DirectionalLightTestDemo : public LightTestDemo
{
public:
    CREATE_FUNC(DirectionalLightTestDemo);
    DirectionalLightTestDemo();
    virtual ~DirectionalLightTestDemo();

    virtual std::string title() const;

    virtual void update(float delta);

private:

    void addSprite();
    void addLights();

private:
    Light3D *_directionalLight;
};

class SpotLightTestDemo : public LightTestDemo
{
public:
    CREATE_FUNC(SpotLightTestDemo);
    SpotLightTestDemo();
    virtual ~SpotLightTestDemo();

    virtual std::string title() const;

    virtual void update(float delta);

private:

    void addSprite();
    void addLights();

private:
    Light3D *_spotLight;
};


class LightTestScene : public TestScene
{
public:
    LightTestScene();
    virtual void runThisTest();
};

#endif

