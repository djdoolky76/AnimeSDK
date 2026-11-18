#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBCIJJAOCGH.h"

class AHEJGGKDHDF;
class GILBPIMBPKB;
namespace MoleMole { class UISummerMissionTipsWidgetController; }

#define KLIMEDJNKCN_HBPLINHBFFK_OFFSET UNITYSDK_OFFSET(0x1521FAA0)
#define KLIMEDJNKCN_LGGIJKBLAIN_OFFSET UNITYSDK_OFFSET(0x1521F960)
#define KLIMEDJNKCN_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1521FBC0)
#define KLIMEDJNKCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1521F800)

inline static constexpr unsigned int KLIMEDJNKCN_TypeDefinitionIndex = 86582;

class KLIMEDJNKCN : public ::CBCIJJAOCGH
{
public:
	// static const ::System::String* JNIAEBKPLBP; // 0x0
	::GILBPIMBPKB* FDPMDEJANJH; // 0x10
	::AHEJGGKDHDF* KGBDIICHFEL; // 0x18
	::MoleMole::UISummerMissionTipsWidgetController* HDNKMBCIOHD; // 0x20
	::System::Single FGMLBBIJKDK; // 0x28

	::System::Void _ctor(::MoleMole::UISummerMissionTipsWidgetController* NCIMBHDKIJM, ::System::Single FNIOPKPHDEH, ::System::Int32 CKELOFDFEEM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISummerMissionTipsWidgetController*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + KLIMEDJNKCN__CTOR_OFFSET))(this, NCIMBHDKIJM, FNIOPKPHDEH, CKELOFDFEEM);
	}

	::System::Void LGGIJKBLAIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIMEDJNKCN_LGGIJKBLAIN_OFFSET))(this);
	}

	::System::Void HBPLINHBFFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIMEDJNKCN_HBPLINHBFFK_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLIMEDJNKCN_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}
};
