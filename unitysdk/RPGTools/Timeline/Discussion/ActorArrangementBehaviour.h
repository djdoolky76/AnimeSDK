#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPGTools::Timeline::Discussion { class ActorArrangementClip; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_AMOIFGCOKDI_OFFSET UNITYSDK_OFFSET(0xE8CFF80)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8D0610)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8CF1D0)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_HHAIKHAPHBG_OFFSET UNITYSDK_OFFSET(0xE8D0200)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_JGNGGEKDALA_OFFSET UNITYSDK_OFFSET(0xE8CF2A0)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_JKDHAIILDEH_OFFSET UNITYSDK_OFFSET(0xE8CFBA0)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_LDGBPPOFJEO_OFFSET UNITYSDK_OFFSET(0xE8CF820)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8CF1F0)
#define RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8CF1E0)

namespace RPGTools::Timeline::Discussion
{
	inline static constexpr unsigned int ActorArrangementBehaviour_TypeDefinitionIndex = 48785;

	class ActorArrangementBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::Discussion::ActorArrangementClip* _Clip_k__BackingField; // 0x10
		::System::Collections::Generic::HashSet_1<::System::String*>* _UniqueNames; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::Discussion::ActorArrangementClip* get_Clip()
		{
			return ((::RPGTools::Timeline::Discussion::ActorArrangementClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::Discussion::ActorArrangementClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::Discussion::ActorArrangementClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void JGNGGEKDALA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_JGNGGEKDALA_OFFSET))(this);
		}

		::System::Void HHAIKHAPHBG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_HHAIKHAPHBG_OFFSET))(this);
		}

		::System::Void LDGBPPOFJEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_LDGBPPOFJEO_OFFSET))(this);
		}

		::System::Void JKDHAIILDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_JKDHAIILDEH_OFFSET))(this);
		}

		::UnityEngine::Vector3 AMOIFGCOKDI(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DISCUSSION_ACTORARRANGEMENTBEHAVIOUR_AMOIFGCOKDI_OFFSET))(this, a1);
		}

	};
}
