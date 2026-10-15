#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletFadeInState.h"
class OJCKBDEEOCI;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_CPOLFLFDKFP_OFFSET UNITYSDK_OFFSET(0xC8AE440)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xC8AE5B0)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_FADEIN_OFFSET UNITYSDK_OFFSET(0xC8AE4C0)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_FULLSHOW_OFFSET UNITYSDK_OFFSET(0xC8AE560)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC8AE040)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_HIDE_OFFSET UNITYSDK_OFFSET(0xC8AE510)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0xC8AE090)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_LHBKGOFCBMK_OFFSET UNITYSDK_OFFSET(0xC8AE0E0)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC8AE1F0)
#define RPG_CLIENT_BOOKLETSENTENCEELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xC8AE3B0)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletSentenceElement_TypeDefinitionIndex = 72392;

	class BookletSentenceElement
	{
	public:
		::UnityEngine::Animation* AnimRoot; // 0x40
		::UnityEngine::AnimationClip* HideClip; // 0x48
		::UnityEngine::AnimationClip* FadeInClip; // 0x50
		::UnityEngine::AnimationClip* ShowClip; // 0x58
		::UnityEngine::UI::Text* Content; // 0x60
		::OJCKBDEEOCI* BIGJHPJGDNH; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_CTOR_OFFSET))(this);
		}

		::RPG::Client::BookletFadeInState get_State()
		{
			return ((::RPG::Client::BookletFadeInState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_GET_STATE_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_FADEIN_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_HIDE_OFFSET))(this);
		}

		::System::Void FullShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_FULLSHOW_OFFSET))(this);
		}

		::System::Void LHBKGOFCBMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_LHBKGOFCBMK_OFFSET))(this);
		}

		::System::Void CPOLFLFDKFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETSENTENCEELEMENT_CPOLFLFDKFP_OFFSET))(this);
		}

	};
}
