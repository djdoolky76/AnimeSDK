#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_INTERACTIONCOMMONDATA_CMIDJIKAAMN_OFFSET UNITYSDK_OFFSET(0x1B44D7E0)
#define MOLEMOLE_CONFIG_INTERACTIONCOMMONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B44D7D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int InteractionCommonData_TypeDefinitionIndex = 42135;

	class InteractionCommonData : public ::System::Object
	{
	public:
		::System::Single Sensitivity; // 0x10
		::System::Single MobileSensitivity; // 0x14
		::System::Single ConsoleSensitivity; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* DampCurve; // 0x20
		::UnityEngine::AnimationCurve* ClampCurve; // 0x28
		::System::Int32 ClampDuration; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTIONCOMMONDATA__CTOR_OFFSET))(this);
		}

		::MoleMole::Config::InteractionCommonData* CMIDJIKAAMN()
		{
			return ((::MoleMole::Config::InteractionCommonData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_INTERACTIONCOMMONDATA_CMIDJIKAAMN_OFFSET))(this);
		}
	};
}
