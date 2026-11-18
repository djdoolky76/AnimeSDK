#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FNPKHLADEBJ;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class MEKABAIJMNM_1;

#define GMPOCGNGLMH_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x14D04720)
#define GMPOCGNGLMH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D04680)
#define GMPOCGNGLMH_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x14D045E0)
#define GMPOCGNGLMH_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x14D04450)
#define GMPOCGNGLMH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14D043C0)
#define GMPOCGNGLMH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D04250)
#define GMPOCGNGLMH__CTOR_OFFSET UNITYSDK_OFFSET(0x14D04440)

inline static constexpr unsigned int GMPOCGNGLMH_TypeDefinitionIndex = 42325;

class GMPOCGNGLMH : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::MonoUITableScrollV2* OIOMFIEAEEB; // 0x18
	::MoleMole::MonoGamepadNavigatableList* HADGJIKLEPL; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* NHOPFJNDAHA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPOCGNGLMH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMPOCGNGLMH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::GMPOCGNGLMH* KDGMEFEJMGJ(::FNPKHLADEBJ* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::GMPOCGNGLMH*(*)(::FNPKHLADEBJ*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMPOCGNGLMH_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMPOCGNGLMH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMPOCGNGLMH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KDGMEFEJMGJ_1(::FNPKHLADEBJ* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::FNPKHLADEBJ*))((::PBYTE)hIl2Cpp + GMPOCGNGLMH_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GMPOCGNGLMH_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}
};
