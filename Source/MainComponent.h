/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 4.0.1

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_CB87035FA43504BB__
#define __JUCE_HEADER_CB87035FA43504BB__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"

#include "OP1ScreenComponent.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainContentComponent  : public Component,
                              public ButtonListener
{
public:
    //==============================================================================
    MainContentComponent ();
    ~MainContentComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);
    void filesDropped (const StringArray& filenames, int mouseX, int mouseY);
    void mouseMove (const MouseEvent& e);
    void mouseEnter (const MouseEvent& e);
    void mouseExit (const MouseEvent& e);
    void mouseDown (const MouseEvent& e);
    void mouseDrag (const MouseEvent& e);
    void mouseUp (const MouseEvent& e);
    void mouseDoubleClick (const MouseEvent& e);
    bool keyPressed (const KeyPress& key);
    bool keyStateChanged (const bool isKeyDown);

    // Binary resources:
    static const char* body_color_1024_png;
    static const int body_color_1024_pngSize;
    static const char* button_key_white_png;
    static const int button_key_white_pngSize;
    static const char* button_key_black_left_png;
    static const int button_key_black_left_pngSize;
    static const char* button_key_black_center_png;
    static const int button_key_black_center_pngSize;
    static const char* button_key_black_right_png;
    static const int button_key_black_right_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<OP1ScreenComponent> screen;
    ScopedPointer<ImageButton> key_white_0;
    ScopedPointer<ImageButton> key_white_1;
    ScopedPointer<ImageButton> key_white_2;
    ScopedPointer<ImageButton> key_white_3;
    ScopedPointer<ImageButton> key_white_4;
    ScopedPointer<ImageButton> key_white_5;
    ScopedPointer<ImageButton> key_white_6;
    ScopedPointer<ImageButton> key_white_7;
    ScopedPointer<ImageButton> key_white_8;
    ScopedPointer<ImageButton> key_white_9;
    ScopedPointer<ImageButton> key_white_10;
    ScopedPointer<ImageButton> key_white_11;
    ScopedPointer<ImageButton> key_white_12;
    ScopedPointer<ImageButton> key_white_13;
    ScopedPointer<ImageButton> key_black_0;
    ScopedPointer<ImageButton> key_black_2;
    ScopedPointer<ImageButton> key_black_3;
    ScopedPointer<ImageButton> key_black_4;
    ScopedPointer<ImageButton> key_black_1;
    ScopedPointer<ImageButton> key_black_6;
    ScopedPointer<ImageButton> key_black_5;
    ScopedPointer<ImageButton> key_black_7;
    ScopedPointer<ImageButton> key_black_8;
    ScopedPointer<ImageButton> key_black_9;
    Image cachedImage_body_color_1024_png_1;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainContentComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_CB87035FA43504BB__
