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

#define FFMPOALMLPP_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x16185C20)
#define FFMPOALMLPP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16185960)
#define FFMPOALMLPP_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x16185B90)
#define FFMPOALMLPP_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x16185A00)
#define FFMPOALMLPP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x161858D0)
#define FFMPOALMLPP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16185760)
#define FFMPOALMLPP__CTOR_OFFSET UNITYSDK_OFFSET(0x16185950)

inline static constexpr unsigned int FFMPOALMLPP_TypeDefinitionIndex = 81073;

class FFMPOALMLPP : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::MonoUITableScrollV2* OIOMFIEAEEB; // 0x18
	::MEKABAIJMNM_1<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* NHOPFJNDAHA; // 0x20
	::MoleMole::MonoGamepadNavigatableList* HADGJIKLEPL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMPOALMLPP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFMPOALMLPP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFMPOALMLPP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::FFMPOALMLPP* KDGMEFEJMGJ(::FNPKHLADEBJ* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::FFMPOALMLPP*(*)(::FNPKHLADEBJ*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFMPOALMLPP_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::FNPKHLADEBJ* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::FNPKHLADEBJ*))((::PBYTE)hIl2Cpp + FFMPOALMLPP_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFMPOALMLPP_KGEBDLGBGNM_OFFSET))(this);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFMPOALMLPP_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}
};
