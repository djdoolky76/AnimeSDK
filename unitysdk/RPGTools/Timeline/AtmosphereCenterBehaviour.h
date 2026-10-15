#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
namespace RPG::GameCore { class AnchorInfo; }
namespace RPGTools::Timeline { class AtmosphereCenterClip; }

#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8A7250)
#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_GBDGAIANAKN_OFFSET UNITYSDK_OFFSET(0xE8A6D40)
#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8A6C30)
#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_GLAMKOAKIBL_OFFSET UNITYSDK_OFFSET(0xE8A6F50)
#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8A6C50)
#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8A6C40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AtmosphereCenterBehaviour_TypeDefinitionIndex = 47862;

	class AtmosphereCenterBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::AtmosphereCenterClip* _Clip_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::AtmosphereCenterClip* get_Clip()
		{
			return ((::RPGTools::Timeline::AtmosphereCenterClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::AtmosphereCenterClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::AtmosphereCenterClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void GBDGAIANAKN(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_GBDGAIANAKN_OFFSET))(this, a1);
		}

		::System::Void GLAMKOAKIBL(::RPG::GameCore::AnchorInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AnchorInfo*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERBEHAVIOUR_GLAMKOAKIBL_OFFSET))(this, a1);
		}

	};
}
