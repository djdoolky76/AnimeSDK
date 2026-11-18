#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBCIJJAOCGH.h"

class GILBPIMBPKB;
namespace MoleMole { class UISummerMissionTipsWidgetController; }

#define IMKDKNILEJH_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x1ACC0930)
#define IMKDKNILEJH_LGGIJKBLAIN_OFFSET UNITYSDK_OFFSET(0x1ACC0830)
#define IMKDKNILEJH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1ACC09E0)
#define IMKDKNILEJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1ACC0780)

inline static constexpr unsigned int IMKDKNILEJH_TypeDefinitionIndex = 67127;

class IMKDKNILEJH : public ::CBCIJJAOCGH
{
public:
	// static const ::System::String* JNIAEBKPLBP; // 0x0
	::GILBPIMBPKB* FDPMDEJANJH; // 0x10
	::MoleMole::UISummerMissionTipsWidgetController* HDNKMBCIOHD; // 0x18
	::System::Single FGMLBBIJKDK; // 0x20

	::System::Void _ctor(::MoleMole::UISummerMissionTipsWidgetController* NCIMBHDKIJM, ::System::Single FNIOPKPHDEH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerMissionTipsWidgetController*, ::System::Single))((::PBYTE)hIl2Cpp + IMKDKNILEJH__CTOR_OFFSET))(this, NCIMBHDKIJM, FNIOPKPHDEH);
	}

	::System::Void LGGIJKBLAIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKDKNILEJH_LGGIJKBLAIN_OFFSET))(this);
	}

	::System::Void HBPLINHBFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMKDKNILEJH_HBPLINHBFFK_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IMKDKNILEJH_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}
};
