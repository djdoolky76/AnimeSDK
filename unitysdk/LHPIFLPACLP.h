#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define LHPIFLPACLP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C54460)
#define LHPIFLPACLP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16C54390)
#define LHPIFLPACLP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C541F0)
#define LHPIFLPACLP__CTOR_OFFSET UNITYSDK_OFFSET(0x16C54450)

inline static constexpr unsigned int LHPIFLPACLP_TypeDefinitionIndex = 69705;

class LHPIFLPACLP : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* DNGFGABBHEG; // 0x18
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* EPDJDKJFBHP; // 0x28
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x30
	::UnityEngine::UI::Extension::UITimeWidget* OPEHBEBNGCH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPIFLPACLP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHPIFLPACLP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHPIFLPACLP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LHPIFLPACLP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
