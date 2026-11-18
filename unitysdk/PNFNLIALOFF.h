#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PNFNLIALOFF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1BF2ECE0)
#define PNFNLIALOFF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1BF2EBF0)
#define PNFNLIALOFF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1BF2EA20)
#define PNFNLIALOFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2ECD0)

inline static constexpr unsigned int PNFNLIALOFF_TypeDefinitionIndex = 52398;

class PNFNLIALOFF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GLNDILPMGMJ; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GANCEGMMNMB; // 0x20
	::MonoUITableScrollV2* KFNPGGFEBPE; // 0x28
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x30
	::LGINJIKKBJA* PJGLNHAAGOD; // 0x38
	::MonoUITableScrollV2* JNJGEMAAFFC; // 0x40
	::MonoUITableScrollV2* FKFJCPCFFDJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFNLIALOFF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNFNLIALOFF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFNLIALOFF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNFNLIALOFF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
