#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class PGNHKIPAGPK;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LKKNJOLKFOA_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x156646F0)
#define LKKNJOLKFOA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15664650)
#define LKKNJOLKFOA_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x15664910)
#define LKKNJOLKFOA_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x15664820)
#define LKKNJOLKFOA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x156645A0)
#define LKKNJOLKFOA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15664360)
#define LKKNJOLKFOA__CTOR_OFFSET UNITYSDK_OFFSET(0x15664640)

inline static constexpr unsigned int LKKNJOLKFOA_TypeDefinitionIndex = 86397;

class LKKNJOLKFOA : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::GCIMMDDIFBJ* PGDNKCDOECI; // 0x18
	::FGCOIBFFCHB* LLHPHHPDAAO; // 0x20
	::GCIMMDDIFBJ* IJDPDOHOCGB; // 0x28
	::UnityEngine::GameObject* FLOANEOLEFN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* NINIFMIBDIE; // 0x40
	::UnityEngine::RectTransform* PPGOGGMDMGF; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x50
	::FGCOIBFFCHB* GJNNECLHOEB; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKNJOLKFOA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKKNJOLKFOA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKKNJOLKFOA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKKNJOLKFOA_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKNJOLKFOA_KGEBDLGBGNM_OFFSET))(this);
	}

	static ::LKKNJOLKFOA* KDGMEFEJMGJ(::PGNHKIPAGPK* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::LKKNJOLKFOA*(*)(::PGNHKIPAGPK*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKKNJOLKFOA_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::PGNHKIPAGPK* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::PGNHKIPAGPK*))((::PBYTE)hIl2Cpp + LKKNJOLKFOA_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}
};
