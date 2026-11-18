#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CHFNPHNOJBK_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x128F9400)
#define CHFNPHNOJBK_BBEABLNJNKN_OFFSET UNITYSDK_OFFSET(0x128F93F0)
#define CHFNPHNOJBK_BDJLFIGAABO_OFFSET UNITYSDK_OFFSET(0x128F9420)
#define CHFNPHNOJBK_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x128F9190)
#define CHFNPHNOJBK_ILJCJLABAIO_OFFSET UNITYSDK_OFFSET(0x128F9410)
#define CHFNPHNOJBK_JAKMICNIOFK_OFFSET UNITYSDK_OFFSET(0x128F93D0)
#define CHFNPHNOJBK_MNDHDGHIBCE_OFFSET UNITYSDK_OFFSET(0x128F93E0)
#define CHFNPHNOJBK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x128F90C0)
#define CHFNPHNOJBK__CTOR_OFFSET UNITYSDK_OFFSET(0x128F9340)

inline static constexpr unsigned int CHFNPHNOJBK_TypeDefinitionIndex = 79196;

class CHFNPHNOJBK : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::GameObject* _COBDHEDFNNP_k__BackingField; // 0x28
	::UnityEngine::GameObject* _CEPCOOGMKKP_k__BackingField; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* _EGLGMLGIPAK_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFNPHNOJBK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CHFNPHNOJBK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void JAKMICNIOFK(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CHFNPHNOJBK_JAKMICNIOFK_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::GameObject* MNDHDGHIBCE()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFNPHNOJBK_MNDHDGHIBCE_OFFSET))(this);
	}

	::UnityEngine::GameObject* BBEABLNJNKN()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFNPHNOJBK_BBEABLNJNKN_OFFSET))(this);
	}

	::UnityEngine::UI::Extension::UILocalizationText* AJFFCMNAIEN()
	{
		return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFNPHNOJBK_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFNPHNOJBK_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void ILJCJLABAIO(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CHFNPHNOJBK_ILJCJLABAIO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BDJLFIGAABO(::UnityEngine::UI::Extension::UILocalizationText* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + CHFNPHNOJBK_BDJLFIGAABO_OFFSET))(this, EGEGIMGMJHN);
	}
};
