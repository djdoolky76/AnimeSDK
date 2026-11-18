#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class MEKABAIJMNM_1;

#define FNPKHLADEBJ_CEMGPKNDOON_OFFSET UNITYSDK_OFFSET(0x15EFC3B0)
#define FNPKHLADEBJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15EFC470)
#define FNPKHLADEBJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15EFC2F0)
#define FNPKHLADEBJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15EFC180)
#define FNPKHLADEBJ_POIFGHCCMKN_OFFSET UNITYSDK_OFFSET(0x15EFC510)
#define FNPKHLADEBJ__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFC460)

inline static constexpr unsigned int FNPKHLADEBJ_TypeDefinitionIndex = 65107;

class FNPKHLADEBJ : public ::GIBMJLOJLKD
{
public:
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* NHOPFJNDAHA; // 0x18
	::MoleMole::MonoGamepadNavigatableList* HADGJIKLEPL; // 0x20
	::MonoUITableScrollV2* OIOMFIEAEEB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPKHLADEBJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNPKHLADEBJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Boolean CEMGPKNDOON(::MoleMole::UIControlCollection* FJHDNIKAKLO, ::HNLACBJDCGI* FOLOGOFJHED)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + FNPKHLADEBJ_CEMGPKNDOON_OFFSET))(this, FJHDNIKAKLO, FOLOGOFJHED);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FNPKHLADEBJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean POIFGHCCMKN(::MoleMole::UIControlCollection* MIALFKCCCPI, ::HNLACBJDCGI* KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::HNLACBJDCGI*))((::PBYTE)hIl2Cpp + FNPKHLADEBJ_POIFGHCCMKN_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNPKHLADEBJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
