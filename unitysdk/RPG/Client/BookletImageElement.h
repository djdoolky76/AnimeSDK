#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletFadeInState.h"
class OJCKBDEEOCI;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_BOOKLETIMAGEELEMENT_CPOLFLFDKFP_OFFSET UNITYSDK_OFFSET(0x1C57C590)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57C700)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_FADEIN_OFFSET UNITYSDK_OFFSET(0x1C57C610)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_FULLSHOW_OFFSET UNITYSDK_OFFSET(0x1C57C6B0)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0x1C57C270)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_HIDE_OFFSET UNITYSDK_OFFSET(0x1C57C660)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0x1C57C2C0)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_LHBKGOFCBMK_OFFSET UNITYSDK_OFFSET(0x1C57C310)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1C57C420)
#define RPG_CLIENT_BOOKLETIMAGEELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0x1C57C500)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletImageElement_TypeDefinitionIndex = 74468;

	class BookletImageElement
	{
	public:
		::UnityEngine::Animation* AnimRoot; // 0x40
		::UnityEngine::AnimationClip* HideClip; // 0x48
		::UnityEngine::AnimationClip* FadeInClip; // 0x50
		::UnityEngine::AnimationClip* ShowClip; // 0x58
		::UnityEngine::UI::Image* Front; // 0x60
		::UnityEngine::UI::Image* Back; // 0x68
		::OJCKBDEEOCI* BIGJHPJGDNH; // 0x70
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_CTOR_OFFSET))(this);
		}

		::RPG::Client::BookletFadeInState get_State()
		{
			return ((::RPG::Client::BookletFadeInState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_GET_STATE_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_FADEIN_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_HIDE_OFFSET))(this);
		}

		::System::Void FullShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_FULLSHOW_OFFSET))(this);
		}

		::System::Void LHBKGOFCBMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_LHBKGOFCBMK_OFFSET))(this);
		}

		::System::Void CPOLFLFDKFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETIMAGEELEMENT_CPOLFLFDKFP_OFFSET))(this);
		}

	};
}
