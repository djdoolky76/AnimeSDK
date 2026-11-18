#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EBDNJOBGGKO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169887C0)
#define EBDNJOBGGKO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169886C0)
#define EBDNJOBGGKO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16988440)
#define EBDNJOBGGKO__CTOR_OFFSET UNITYSDK_OFFSET(0x169887B0)

inline static constexpr unsigned int EBDNJOBGGKO_TypeDefinitionIndex = 38912;

class EBDNJOBGGKO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x18
	::UnityEngine::RectTransform* IAHPILBJLBF; // 0x20
	::LGINJIKKBJA* FDHNEBFCKEJ; // 0x28
	::UnityEngine::GameObject* NEMJJKIFGJM; // 0x30
	::LGINJIKKBJA* FIEAEGDAPJJ; // 0x38
	::LGINJIKKBJA* ANIGINDJMAP; // 0x40
	::MoleMole::NotificationBadgeEx* LHOADKMDIDG; // 0x48
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x58
	::UnityEngine::GameObject* NPDJGHOEONF; // 0x60
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x68
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x70
	::UnityEngine::GameObject* FNPPEOKJHBN; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDNJOBGGKO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBDNJOBGGKO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDNJOBGGKO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBDNJOBGGKO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
