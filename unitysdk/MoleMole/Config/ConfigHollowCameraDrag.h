#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERADRAG__CTOR_OFFSET UNITYSDK_OFFSET(0x19241120)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowCameraDrag_TypeDefinitionIndex = 39231;

	class ConfigHollowCameraDrag : public ::System::Object
	{
	public:
		::UnityEngine::AnimationCurve* dragDampCurve; // 0x10
		::UnityEngine::AnimationCurve* camraZToDragCurve; // 0x18
		::System::Single dragDumpingTime; // 0x20
		::System::Single diagonalBorderRatio; // 0x24
		::System::Single borderRatioW; // 0x28
		::System::Single dampBorderRatioRight; // 0x2C
		::System::Boolean EnableDragDebug; // 0x30
		::System::Boolean isCustomDragDampCurve; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single camraZToDragRatioMouse; // 0x34
		::UnityEngine::Vector2 dragSpeedFactorTouch; // 0x38
		::System::Single freezeCamDragDampFactor; // 0x40
		::System::Single dampBorderRatioTop; // 0x44
		::System::Single borderRatioH; // 0x48
		::System::Single dampBorderRatioLeft; // 0x4C
		::UnityEngine::Vector2 dragSpeedFactorMouse; // 0x50
		::System::Single camraZToDragRatioDPad; // 0x58
		::System::Single borderOffset; // 0x5C
		::System::Single dragSpeedFactorDPad; // 0x60
		::System::Single camraZToDragRatioTouch; // 0x64
		::System::Single dampBorderRatioBottom; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCAMERADRAG__CTOR_OFFSET))(this);
		}
	};
}
