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

#define IAOAIPCAICA_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x16A8F700)
#define IAOAIPCAICA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16A8F440)
#define IAOAIPCAICA_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x16A8F670)
#define IAOAIPCAICA_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x16A8F4E0)
#define IAOAIPCAICA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16A8F3B0)
#define IAOAIPCAICA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16A8F240)
#define IAOAIPCAICA__CTOR_OFFSET UNITYSDK_OFFSET(0x16A8F430)

inline static constexpr unsigned int IAOAIPCAICA_TypeDefinitionIndex = 57716;

class IAOAIPCAICA : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* NHOPFJNDAHA; // 0x18
	::MoleMole::MonoGamepadNavigatableList* HADGJIKLEPL; // 0x20
	::MonoUITableScrollV2* OIOMFIEAEEB; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOAIPCAICA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAOAIPCAICA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAOAIPCAICA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::IAOAIPCAICA* KDGMEFEJMGJ(::FNPKHLADEBJ* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::IAOAIPCAICA*(*)(::FNPKHLADEBJ*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAOAIPCAICA_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOAIPCAICA_KGEBDLGBGNM_OFFSET))(this);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAOAIPCAICA_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::FNPKHLADEBJ* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::FNPKHLADEBJ*))((::PBYTE)hIl2Cpp + IAOAIPCAICA_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}
};
