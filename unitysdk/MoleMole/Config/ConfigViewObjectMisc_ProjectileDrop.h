#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_PROJECTILEDROP_BHHCPCGABJI_OFFSET UNITYSDK_OFFSET(0x6C45C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigViewObjectMisc_ProjectileDrop_TypeDefinitionIndex = 57425;

	struct alignas(8) ConfigViewObjectMisc_ProjectileDrop
	{
		::System::String* curveKey; // 0x10
		::System::Boolean isDebug; // 0x18
		::System::Byte _padding0[0x7];
		::UnityEngine::AnimationCurve* overrideRhythmCurve; // 0x20
		::System::Single totalDuration; // 0x28
		::System::Single launchHeight; // 0x2C

		::UnityEngine::AnimationCurve* BHHCPCGABJI()
		{
			return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGVIEWOBJECTMISC_PROJECTILEDROP_BHHCPCGABJI_OFFSET))(this);
		}
	};
}
