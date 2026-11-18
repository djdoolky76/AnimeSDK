#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define NHAPFDNLLKH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1F459820)
#define NHAPFDNLLKH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1F459730)
#define NHAPFDNLLKH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1F459590)
#define NHAPFDNLLKH__CTOR_OFFSET UNITYSDK_OFFSET(0x1F459810)

inline static constexpr unsigned int NHAPFDNLLKH_TypeDefinitionIndex = 96436;

class NHAPFDNLLKH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JJEEOEKCKND; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x28
	::UnityEngine::GameObject* AHKNHJKFDCH; // 0x30
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAPFDNLLKH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHAPFDNLLKH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHAPFDNLLKH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHAPFDNLLKH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
