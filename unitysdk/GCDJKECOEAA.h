#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GCDJKECOEAA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132481F0)
#define GCDJKECOEAA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13248100)
#define GCDJKECOEAA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13247F70)
#define GCDJKECOEAA__CTOR_OFFSET UNITYSDK_OFFSET(0x132481E0)

inline static constexpr unsigned int GCDJKECOEAA_TypeDefinitionIndex = 64815;

class GCDJKECOEAA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::LGINJIKKBJA* CJBOGNKLKFJ; // 0x20
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDJKECOEAA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCDJKECOEAA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCDJKECOEAA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCDJKECOEAA_KGEBDLGBGNM_OFFSET))(this);
	}
};
