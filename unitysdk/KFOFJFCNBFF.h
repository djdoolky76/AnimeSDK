#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class DHLEIBJBMPL;
class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KFOFJFCNBFF_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x17906EF0)
#define KFOFJFCNBFF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17906E50)
#define KFOFJFCNBFF_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x179070D0)
#define KFOFJFCNBFF_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x17907020)
#define KFOFJFCNBFF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17906D60)
#define KFOFJFCNBFF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17906B60)
#define KFOFJFCNBFF__CTOR_OFFSET UNITYSDK_OFFSET(0x17906E40)

inline static constexpr unsigned int KFOFJFCNBFF_TypeDefinitionIndex = 80079;

class KFOFJFCNBFF : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::GameObject* CMHCFHJBGOP; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::UnityEngine::GameObject* LIMEJNBGAJE; // 0x28
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* IOBBIDNNCHH; // 0x40
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOFJFCNBFF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFOFJFCNBFF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFOFJFCNBFF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFOFJFCNBFF_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFOFJFCNBFF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void KDGMEFEJMGJ(::DHLEIBJBMPL* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::DHLEIBJBMPL*))((::PBYTE)hIl2Cpp + KFOFJFCNBFF_KDGMEFEJMGJ_OFFSET))(this, AEJAMJDBHAM);
	}

	static ::KFOFJFCNBFF* KDGMEFEJMGJ_1(::DHLEIBJBMPL* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::KFOFJFCNBFF*(*)(::DHLEIBJBMPL*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KFOFJFCNBFF_KDGMEFEJMGJ_1_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}
};
