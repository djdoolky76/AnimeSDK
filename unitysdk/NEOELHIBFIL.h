#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralActivityTagInfoWidgetController; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define NEOELHIBFIL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12FE1840)
#define NEOELHIBFIL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12FE1740)
#define NEOELHIBFIL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12FE14B0)
#define NEOELHIBFIL__CTOR_OFFSET UNITYSDK_OFFSET(0x12FE1830)

inline static constexpr unsigned int NEOELHIBFIL_TypeDefinitionIndex = 48875;

class NEOELHIBFIL : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PDMMFPDGMEB; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIGeneralActivityTagInfoWidgetController*>* EOMGAEONDMD; // 0x20
	::GCIMMDDIFBJ* DHCKPIBEKNB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x30
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x38
	::MoleMole::UIGeneralButtonController* DFKEJDCDLOB; // 0x40
	::FGCOIBFFCHB* EPIFILEEHFF; // 0x48
	::FGCOIBFFCHB* FIBHOCHAPNN; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* GDHCGNFJNNO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOELHIBFIL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEOELHIBFIL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NEOELHIBFIL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEOELHIBFIL_KGEBDLGBGNM_OFFSET))(this);
	}
};
