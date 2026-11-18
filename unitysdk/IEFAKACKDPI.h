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

#define IEFAKACKDPI_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x140DB260)
#define IEFAKACKDPI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140DB550)
#define IEFAKACKDPI_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x140DB480)
#define IEFAKACKDPI_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x140DB390)
#define IEFAKACKDPI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x140DB1B0)
#define IEFAKACKDPI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140DAF70)
#define IEFAKACKDPI__CTOR_OFFSET UNITYSDK_OFFSET(0x140DB250)

inline static constexpr unsigned int IEFAKACKDPI_TypeDefinitionIndex = 86998;

class IEFAKACKDPI : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0
	::GCIMMDDIFBJ* IJDPDOHOCGB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* NINIFMIBDIE; // 0x20
	::UnityEngine::GameObject* FLOANEOLEFN; // 0x28
	::GCIMMDDIFBJ* PGDNKCDOECI; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x40
	::UnityEngine::RectTransform* PPGOGGMDMGF; // 0x48
	::FGCOIBFFCHB* GJNNECLHOEB; // 0x50
	::FGCOIBFFCHB* LLHPHHPDAAO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFAKACKDPI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEFAKACKDPI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEFAKACKDPI_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	static ::IEFAKACKDPI* KDGMEFEJMGJ(::PGNHKIPAGPK* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::IEFAKACKDPI*(*)(::PGNHKIPAGPK*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEFAKACKDPI_KDGMEFEJMGJ_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KDGMEFEJMGJ_1(::PGNHKIPAGPK* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::PGNHKIPAGPK*))((::PBYTE)hIl2Cpp + IEFAKACKDPI_KDGMEFEJMGJ_1_OFFSET))(this, AEJAMJDBHAM);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEFAKACKDPI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IEFAKACKDPI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
