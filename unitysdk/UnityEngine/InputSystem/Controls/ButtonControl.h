#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/AxisControl.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_BEGINTESTINGFORFRAMEPRESSES_OFFSET UNITYSDK_OFFSET(0x3FC28F0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x3FC2BD0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_NEEDSTOCHECKFRAMEPRESS_OFFSET UNITYSDK_OFFSET(0x3FC2C90)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x3FC2CA0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_WASPRESSEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x3FC2D00)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_WASRELEASEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x3FC2E90)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_ISVALUECONSIDEREDPRESSED_OFFSET UNITYSDK_OFFSET(0x3FC29C0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_SET_NEEDSTOCHECKFRAMEPRESS_OFFSET UNITYSDK_OFFSET(0x3FC3010)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_UPDATEWASPRESSED_OFFSET UNITYSDK_OFFSET(0x3FC2A40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x3FC2B20)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int ButtonControl_TypeDefinitionIndex = 14421;

	class ButtonControl : public ::UnityEngine::InputSystem::Controls::AxisControl
	{
	public:
		static ::System::Single* StaticGet_s_GlobalDefaultButtonPressPoint()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ButtonControl_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Single* StaticGet_s_GlobalDefaultButtonReleaseThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ButtonControl_TypeDefinitionIndex)->GetStaticField(0x4);
		}
		// static const ::System::Single kMinButtonPressPoint; // 0x0
		::System::Boolean m_NeedsToCheckFramePress; // 0x130
		::System::Byte _padding0[0x3];
		::System::UInt32 m_UpdateCountLastPressed; // 0x134
		::System::UInt32 m_UpdateCountLastReleased; // 0x138
		::System::Boolean m_LastUpdateWasPress; // 0x13C
		::System::Boolean _needsToCheckFramePress_k__BackingField; // 0x13D
		::System::Byte _padding1[0x2];
		::System::Single pressPoint; // 0x140

		::System::Boolean get_needsToCheckFramePress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_NEEDSTOCHECKFRAMEPRESS_OFFSET))(this);
		}

		::System::Void set_needsToCheckFramePress(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_SET_NEEDSTOCHECKFRAMEPRESS_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean get_isPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_ISPRESSED_OFFSET))(this);
		}

		::System::Boolean IsValueConsideredPressed(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_ISVALUECONSIDEREDPRESSED_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_pressPointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_PRESSPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Boolean get_wasPressedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_WASPRESSEDTHISFRAME_OFFSET))(this);
		}

		::System::Void BeginTestingForFramePresses(::System::Boolean E6E8BB58B11AB8D5, ::System::Boolean A0F6AD050CD2A26E)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_BEGINTESTINGFORFRAMEPRESSES_OFFSET))(this, E6E8BB58B11AB8D5, A0F6AD050CD2A26E);
		}

		::System::Void UpdateWasPressed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_UPDATEWASPRESSED_OFFSET))(this);
		}

		::System::Boolean get_wasReleasedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_WASRELEASEDTHISFRAME_OFFSET))(this);
		}
	};
}
