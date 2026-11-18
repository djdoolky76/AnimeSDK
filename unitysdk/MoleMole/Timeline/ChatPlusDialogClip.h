#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace MoleMole::Timeline { class ChatPlusDialogBehaviour; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x15AD8A60)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x15AD8A50)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGCLIP_JPDKEPKOMPP_OFFSET UNITYSDK_OFFSET(0x15AD8DB0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGCLIP_KOPLHACOBFC_OFFSET UNITYSDK_OFFSET(0x15AD8CD0)
#define MOLEMOLE_TIMELINE_CHATPLUSDIALOGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x15AD8E10)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int ChatPlusDialogClip_TypeDefinitionIndex = 53914;

	class ChatPlusDialogClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::ChatPlusDialogBehaviour* template_; // 0x18
		::Il2CppArray<::System::Int32>* disableInVoiceLanguages; // 0x20
		::System::Boolean disableMale; // 0x28
		::System::Boolean disableFemale; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph MHPNGBGGMMN, ::UnityEngine::GameObject* AMNIHACKELI)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGCLIP_CREATEPLAYABLE_OFFSET))(this, MHPNGBGGMMN, AMNIHACKELI);
		}

		::System::Boolean KOPLHACOBFC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGCLIP_KOPLHACOBFC_OFFSET))(this);
		}

		::System::Boolean JPDKEPKOMPP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHATPLUSDIALOGCLIP_JPDKEPKOMPP_OFFSET))(this);
		}
	};
}
