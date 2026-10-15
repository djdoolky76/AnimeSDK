#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNNCLMDGIFH.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

#define RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8CD820)
#define RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_GET_GROUPIDSET_OFFSET UNITYSDK_OFFSET(0xE8CD710)
#define RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8CD740)
#define RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_SET_GROUPIDSET_OFFSET UNITYSDK_OFFSET(0xE8CD730)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int DanmuAddSequenceBehaviour_TypeDefinitionIndex = 48062;

	class DanmuAddSequenceBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::DNNCLMDGIFH _GroupIdSet_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::DNNCLMDGIFH get_GroupIdSet()
		{
			return ((::DNNCLMDGIFH(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_GET_GROUPIDSET_OFFSET))(this);
		}

		::System::Void set_GroupIdSet(::DNNCLMDGIFH a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNNCLMDGIFH))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_SET_GROUPIDSET_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DANMUADDSEQUENCEBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

	};
}
