#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KOODLOHJDOL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1864CE80)
#define KOODLOHJDOL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1864CDF0)
#define KOODLOHJDOL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1864CBD0)
#define KOODLOHJDOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1864CE70)

inline static constexpr unsigned int KOODLOHJDOL_TypeDefinitionIndex = 63086;

class KOODLOHJDOL : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::MoleMole::MonoInputKey* ENKOLDOMCNA; // 0x28
	::GCIMMDDIFBJ* HBPKCNJFOPC; // 0x30
	::UnityEngine::Transform* PEFNEBEDKBH; // 0x38
	::UnityEngine::RectTransform* JFHCMCCHFCK; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JEDGGJKBMMG; // 0x48
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOODLOHJDOL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KOODLOHJDOL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KOODLOHJDOL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOODLOHJDOL_KGEBDLGBGNM_OFFSET))(this);
	}
};
