#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP_CCTOR_OFFSET UNITYSDK_OFFSET(0xF457720)
#define RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xF4574A0)
#define RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xF4576B0)
#define RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xF457490)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowRollingSubtitlesDialogClip_TypeDefinitionIndex = 49341;

	class ShowRollingSubtitlesDialogClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* UILuaPath; // 0x18
		::System::String* ConfigPath; // 0x20
		static ::System::String** StaticGet_UI_NAME()
		{
			return (::System::String**)UnitySDK::FromName("RPGTools.Timeline", "ShowRollingSubtitlesDialogClip")->GetStaticField(0x9380);
		}

		static ::System::String** StaticGet_UI_LUA_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPGTools.Timeline", "ShowRollingSubtitlesDialogClip")->GetStaticField(0x9388);
		}

		static ::RPG::Client::NotifyType* StaticGet_CLOSE_NOTIFY_TYPE()
		{
			return (::RPG::Client::NotifyType*)UnitySDK::FromName("RPGTools.Timeline", "ShowRollingSubtitlesDialogClip")->GetStaticField(0x8D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP_CCTOR_OFFSET))();
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWROLLINGSUBTITLESDIALOGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
