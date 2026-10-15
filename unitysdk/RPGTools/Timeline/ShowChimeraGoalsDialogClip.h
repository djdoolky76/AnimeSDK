#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGCLIP_CCTOR_OFFSET UNITYSDK_OFFSET(0xE92E070)
#define RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE92DE20)
#define RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGCLIP_CTOR_OFFSET UNITYSDK_OFFSET(0xE92DFF0)
#define RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE92DE10)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowChimeraGoalsDialogClip_TypeDefinitionIndex = 48289;

	class ShowChimeraGoalsDialogClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* UILuaPath; // 0x18
		::System::String* UIParam; // 0x20
		static ::System::String** StaticGet_UI_NAME()
		{
			return (::System::String**)UnitySDK::FromName("RPGTools.Timeline", "ShowChimeraGoalsDialogClip")->GetStaticField(0x6FE00);
		}

		static ::System::String** StaticGet_UI_LUA_PATH()
		{
			return (::System::String**)UnitySDK::FromName("RPGTools.Timeline", "ShowChimeraGoalsDialogClip")->GetStaticField(0x6FE08);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGCLIP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGCLIP_CCTOR_OFFSET))();
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCHIMERAGOALSDIALOGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

	};
}
