#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BookletFadeInState.h"
class DMDPOFBLBIE;
class OJCKBDEEOCI;
namespace System { class Nullable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_CPOLFLFDKFP_OFFSET UNITYSDK_OFFSET(0xC8B2550)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_CTOR_OFFSET UNITYSDK_OFFSET(0xC8B2810)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_FADEIN_OFFSET UNITYSDK_OFFSET(0xC8B26F0)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_FULLSHOW_OFFSET UNITYSDK_OFFSET(0xC8B27B0)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_GET_ISLIVE_OFFSET UNITYSDK_OFFSET(0xC8B1D90)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_GET_STATE_OFFSET UNITYSDK_OFFSET(0xC8B1D40)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_HIDE_OFFSET UNITYSDK_OFFSET(0xC8B2750)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_INITVIEW_OFFSET UNITYSDK_OFFSET(0xC8B1EF0)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_JCCOEGPFLLH_OFFSET UNITYSDK_OFFSET(0xC8B2050)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_KKLJCKDKGHI_OFFSET UNITYSDK_OFFSET(0xC8B25D0)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_LHBKGOFCBMK_OFFSET UNITYSDK_OFFSET(0xC8B1F40)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_OMAGALIHIPE_OFFSET UNITYSDK_OFFSET(0xC8B1E50)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC8B21C0)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT_SET_ISLIVE_OFFSET UNITYSDK_OFFSET(0xC8B1DD0)
#define RPG_CLIENT_BOOKLETBASICPAGEELEMENT__BEFOREDESTROY_OFFSET UNITYSDK_OFFSET(0xC8B2490)

namespace RPG::Client
{
	inline static constexpr unsigned int BookletBasicPageElement_TypeDefinitionIndex = 72385;

	class BookletBasicPageElement
	{
	public:
		::UnityEngine::Animation* AnimRoot; // 0x40
		::UnityEngine::AnimationClip* HideClip; // 0x48
		::UnityEngine::AnimationClip* FadeInClip; // 0x50
		::UnityEngine::AnimationClip* ShowClip; // 0x58
		::UnityEngine::AnimationClip* EnableClip; // 0x60
		::UnityEngine::AnimationClip* DisableClip; // 0x68
		::UnityEngine::Transform* Content; // 0x70
		::System::Nullable* NIFELEEFFIJ; // 0x78
		::OJCKBDEEOCI* BIGJHPJGDNH; // 0x80
		::System::Collections::Generic::List_1<::DMDPOFBLBIE*>* IOEFEFMMKFP; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_CTOR_OFFSET))(this);
		}

		::RPG::Client::BookletFadeInState get_State()
		{
			return ((::RPG::Client::BookletFadeInState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_GET_STATE_OFFSET))(this);
		}

		::System::Boolean get_IsLive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_GET_ISLIVE_OFFSET))(this);
		}

		::System::Void set_IsLive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_SET_ISLIVE_OFFSET))(this, a1);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void _BeforeDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT__BEFOREDESTROY_OFFSET))(this);
		}

		::System::Void FadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_FADEIN_OFFSET))(this);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_HIDE_OFFSET))(this);
		}

		::System::Void FullShow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_FULLSHOW_OFFSET))(this);
		}

		::System::Void LHBKGOFCBMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_LHBKGOFCBMK_OFFSET))(this);
		}

		::System::Void CPOLFLFDKFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_CPOLFLFDKFP_OFFSET))(this);
		}

		::System::Void OMAGALIHIPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_OMAGALIHIPE_OFFSET))(this);
		}

		::System::Void JCCOEGPFLLH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_JCCOEGPFLLH_OFFSET))(this);
		}

		::System::Void KKLJCKDKGHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOOKLETBASICPAGEELEMENT_KKLJCKDKGHI_OFFSET))(this);
		}

	};
}
