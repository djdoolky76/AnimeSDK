#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/Sirenix/OdinInspector/ValueDropdownItem_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_AEJGJGDEDOM_OFFSET UNITYSDK_OFFSET(0xE94B330)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE94B150)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE94B430)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE94B140)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_KCLOCCFEKHE_OFFSET UNITYSDK_OFFSET(0xE94B2B0)
#define RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_NPJFGIILMPG_OFFSET UNITYSDK_OFFSET(0xE94B3B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkImageV2ShowClip_TypeDefinitionIndex = 48394;

	class TalkImageV2ShowClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* PanelType; // 0x18
		::System::Single FadeSpeed; // 0x20
		::System::Single FadeTime; // 0x24
		::System::Boolean IsPlayerInvolved; // 0x28
		::System::Byte _padding0[0x7];
		::System::String* ImagePath; // 0x30
		::System::String* MaleImagePath; // 0x38
		::System::String* FemaleImagePath; // 0x40
		::System::String* MaterialPath; // 0x48
		::System::Boolean IsCustomAspect; // 0x50
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector2 CustomAspect; // 0x54
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean KCLOCCFEKHE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_KCLOCCFEKHE_OFFSET))(this);
		}

		::System::Boolean AEJGJGDEDOM(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_AEJGJGDEDOM_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>>* NPJFGIILMPG()
		{
			return ((::System::Collections::Generic::List_1<::Sirenix::OdinInspector::ValueDropdownItem_1<::System::String*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKIMAGEV2SHOWCLIP_NPJFGIILMPG_OFFSET))(this);
		}

	};
}
