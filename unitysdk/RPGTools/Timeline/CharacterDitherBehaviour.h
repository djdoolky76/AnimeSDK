#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
class LHPDLBPKCDK;
namespace RPGTools::Timeline { class CharacterDitherClip; }
namespace System { class Object; }

#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_CTOR_OFFSET UNITYSDK_OFFSET(0xE8BCCE0)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_GET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8BC750)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_MONBKEHBCCA_OFFSET UNITYSDK_OFFSET(0xE8BC840)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_NBCPGGBFHCD_OFFSET UNITYSDK_OFFSET(0xE8BCC10)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET UNITYSDK_OFFSET(0xE8BC770)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xE8BCA90)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_SET_CLIP_OFFSET UNITYSDK_OFFSET(0xE8BC760)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterDitherBehaviour_TypeDefinitionIndex = 47946;

	class CharacterDitherBehaviour : public ::UnityEngine::Playables::PlayableBehaviour
	{
	public:
		::RPGTools::Timeline::CharacterDitherClip* _Clip_k__BackingField; // 0x10
		::System::Single DirectlyDitherValue; // 0x18
		::System::Byte _padding0[0x4];
		::LHPDLBPKCDK* _VisibleCmpt; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_CTOR_OFFSET))(this);
		}

		::RPGTools::Timeline::CharacterDitherClip* get_Clip()
		{
			return ((::RPGTools::Timeline::CharacterDitherClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_GET_CLIP_OFFSET))(this);
		}

		::System::Void set_Clip(::RPGTools::Timeline::CharacterDitherClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::CharacterDitherClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_SET_CLIP_OFFSET))(this, a1);
		}

		::System::Void OnBehaviourPlay(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_ONBEHAVIOURPLAY_OFFSET))(this, a1, a2);
		}

		::System::Void ProcessFrame(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MONBKEHBCCA(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_MONBKEHBCCA_OFFSET))(this, a1, a2);
		}

		::System::Void NBCPGGBFHCD(::UnityEngine::Playables::Playable a1, ::UnityEngine::Playables::FrameData a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERBEHAVIOUR_NBCPGGBFHCD_OFFSET))(this, a1, a2, a3);
		}

	};
}
