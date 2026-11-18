#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IBDDBKEHBGJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12E9E7F0)
#define IBDDBKEHBGJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12E9E760)
#define IBDDBKEHBGJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12E9E5E0)
#define IBDDBKEHBGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9E7E0)

inline static constexpr unsigned int IBDDBKEHBGJ_TypeDefinitionIndex = 82191;

class IBDDBKEHBGJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PNDHOGLJAHH; // 0x18
	::UnityEngine::GameObject* PPGOGGMDMGF; // 0x20
	::FGCOIBFFCHB* GMDAJPJHDLG; // 0x28
	::UnityEngine::GameObject* HLJMMLMNFDG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDDBKEHBGJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IBDDBKEHBGJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IBDDBKEHBGJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBDDBKEHBGJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
