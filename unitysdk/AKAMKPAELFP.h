#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define AKAMKPAELFP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x144E46E0)
#define AKAMKPAELFP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x144E4610)
#define AKAMKPAELFP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x144E4410)
#define AKAMKPAELFP__CTOR_OFFSET UNITYSDK_OFFSET(0x144E46D0)

inline static constexpr unsigned int AKAMKPAELFP_TypeDefinitionIndex = 85541;

class AKAMKPAELFP : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KDFKJNOCKNM; // 0x20
	::UnityEngine::UI::Extension::UITimeWidget* BJEHKHOHCPE; // 0x28
	::LGINJIKKBJA* PMGJJDOJGFK; // 0x30
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x38
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* LBHLECEOOAG; // 0x40
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMKPAELFP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AKAMKPAELFP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKAMKPAELFP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AKAMKPAELFP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
