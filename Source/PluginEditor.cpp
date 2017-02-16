/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.3.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "PluginEditor.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
AmbiEncoderAudioProcessorEditor::AmbiEncoderAudioProcessorEditor (AmbiEncoderAudioProcessor& p)
    : AudioProcessorEditor(p), processor(p)
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (sliderPanPosition = new Slider ("pan position"));
    sliderPanPosition->setRange (0, 360, 0);
    sliderPanPosition->setSliderStyle (Slider::LinearHorizontal);
    sliderPanPosition->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    sliderPanPosition->addListener (this);

    addAndMakeVisible (sliderPanPosition2 = new Slider ("pan position 2"));
    sliderPanPosition2->setRange (0, 360, 0);
    sliderPanPosition2->setSliderStyle (Slider::LinearVertical);
    sliderPanPosition2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    sliderPanPosition2->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
	startTimer(200);
    //[/Constructor]
}

AmbiEncoderAudioProcessorEditor::~AmbiEncoderAudioProcessorEditor()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    sliderPanPosition = nullptr;
    sliderPanPosition2 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void AmbiEncoderAudioProcessorEditor::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void AmbiEncoderAudioProcessorEditor::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    sliderPanPosition->setBounds (16, 224, 150, 24);
    sliderPanPosition2->setBounds (72, 72, 24, 150);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void AmbiEncoderAudioProcessorEditor::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]
    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == sliderPanPosition)
    {
        //[UserSliderCode_sliderPanPosition] -- add your slider handling code here..
		processor.gui_PanAngle = sliderPanPosition->getValue();
        //[/UserSliderCode_sliderPanPosition]
    }
    else if (sliderThatWasMoved == sliderPanPosition2)
    {
        //[UserSliderCode_sliderPanPosition2] -- add your slider handling code here..
		processor.gui_PanAngle2 = sliderPanPosition2->getValue();
        //[/UserSliderCode_sliderPanPosition2]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
void AmbiEncoderAudioProcessorEditor::timerCallback()
{

}
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="AmbiEncoderAudioProcessorEditor"
                 componentName="" parentClasses="public AudioProcessorEditor, public Timer"
                 constructorParams="AmbiEncoderAudioProcessor&amp; p" variableInitialisers="AudioProcessorEditor(p), processor(p)"
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff"/>
  <SLIDER name="pan position" id="bba2d8643dc2dfb" memberName="sliderPanPosition"
          virtualName="" explicitFocusOrder="0" pos="16 224 150 24" min="0"
          max="360" int="0" style="LinearHorizontal" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
  <SLIDER name="pan position 2" id="d858188674f895f8" memberName="sliderPanPosition2"
          virtualName="" explicitFocusOrder="0" pos="72 72 24 150" min="0"
          max="360" int="0" style="LinearVertical" textBoxPos="NoTextBox"
          textBoxEditable="1" textBoxWidth="80" textBoxHeight="20" skewFactor="1"
          needsCallback="1"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]
