#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define HHENGDAEEMA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1F44F390)
#define HHENGDAEEMA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1F44F2A0)
#define HHENGDAEEMA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1F44F0E0)
#define HHENGDAEEMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F44F380)

inline static constexpr unsigned int HHENGDAEEMA_TypeDefinitionIndex = 96473;

class HHENGDAEEMA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JJEEOEKCKND; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x28
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x30
	::UnityEngine::GameObject* PPJKENAFHHH; // 0x38
	::UnityEngine::GameObject* NIGCIPNLDJJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHENGDAEEMA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHENGDAEEMA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHENGDAEEMA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHENGDAEEMA_KGEBDLGBGNM_OFFSET))(this);
	}
};
