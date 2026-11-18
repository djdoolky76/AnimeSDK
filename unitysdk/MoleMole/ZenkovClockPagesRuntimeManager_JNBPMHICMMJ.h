#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ZenkovClockPagesRuntimeManager_KEBKMHJOHKA.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Animations/AnimationClipPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole { class ZenkovClockPagesRuntimeManager_ClockPageBinding; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_ZENKOVCLOCKPAGESRUNTIMEMANAGER_JNBPMHICMMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8252C0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovClockPagesRuntimeManager_JNBPMHICMMJ_TypeDefinitionIndex = 26602;

	class ZenkovClockPagesRuntimeManager_JNBPMHICMMJ : public ::System::Object
	{
	public:
		::MoleMole::ZenkovClockPagesRuntimeManager_ClockPageBinding* CBMLHPAEMMK; // 0x10
		::UnityEngine::Animator* ICAAMDMMDDJ; // 0x18
		::System::Boolean IIBNMBOOHBM; // 0x20
		::System::Boolean HDNBFDNJKAL; // 0x21
		::System::Byte _padding0[0x6];
		::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN; // 0x28
		::System::Single ILINIFCLGJB; // 0x38
		::MoleMole::ZenkovClockPagesRuntimeManager_KEBKMHJOHKA CFMBGCMCNMM; // 0x3C
		::UnityEngine::Animations::AnimationClipPlayable LMOBEKBAHDE; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVCLOCKPAGESRUNTIMEMANAGER_JNBPMHICMMJ__CTOR_OFFSET))(this);
		}
	};
}
