#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class FLCNDDODIMG;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define CBFHJKFDHPL_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x18DC2020)
#define CBFHJKFDHPL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18DC1D40)
#define CBFHJKFDHPL_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x18DC1F80)
#define CBFHJKFDHPL_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x18DC1DE0)
#define CBFHJKFDHPL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18DC1CB0)
#define CBFHJKFDHPL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18DC1B30)
#define CBFHJKFDHPL__CTOR_OFFSET UNITYSDK_OFFSET(0x18DC1D30)

inline static constexpr unsigned int CBFHJKFDHPL_TypeDefinitionIndex = 58862;

class CBFHJKFDHPL : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::UnityEngine::RectTransform* OCJOCLEDABL; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFHJKFDHPL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBFHJKFDHPL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBFHJKFDHPL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBFHJKFDHPL_KGEBDLGBGNM_OFFSET))(this);
	}

	static ::CBFHJKFDHPL* KDGMEFEJMGJ(::FLCNDDODIMG* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::CBFHJKFDHPL*(*)(::FLCNDDODIMG*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBFHJKFDHPL_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CBFHJKFDHPL_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::FLCNDDODIMG* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::FLCNDDODIMG*))((::PBYTE)hIl2Cpp + CBFHJKFDHPL_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}
};
