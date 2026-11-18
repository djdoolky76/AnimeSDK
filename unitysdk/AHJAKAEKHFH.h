#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IOOIHHOJOPI;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define AHJAKAEKHFH_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x181F3C50)
#define AHJAKAEKHFH__CTOR_OFFSET UNITYSDK_OFFSET(0x181F3E80)

inline static constexpr unsigned int AHJAKAEKHFH_TypeDefinitionIndex = 79252;

class AHJAKAEKHFH : public ::PBJOCICFNGK
{
public:
	::UnityEngine::GameObject* ABBEPIHHNNO; // 0x50
	::UnityEngine::UI::Extension::UITabButton* FNMOJAPJAJI; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* KFDOBMKJEPI; // 0x60
	::UnityEngine::GameObject* HBBOMPHPBII; // 0x68
	::System::Int32 ABHBKFJKINO; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJAKAEKHFH__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + AHJAKAEKHFH_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}
};
