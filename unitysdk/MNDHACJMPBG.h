#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }

#define MNDHACJMPBG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CA8E70)
#define MNDHACJMPBG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16CA8DE0)
#define MNDHACJMPBG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CA8C70)
#define MNDHACJMPBG__CTOR_OFFSET UNITYSDK_OFFSET(0x16CA8E60)

inline static constexpr unsigned int MNDHACJMPBG_TypeDefinitionIndex = 55852;

class MNDHACJMPBG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::CanvasGroup* GFMAKNKJADB; // 0x20
	::UnityEngine::GameObject* DEAPLILJLJD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDHACJMPBG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNDHACJMPBG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNDHACJMPBG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDHACJMPBG_KGEBDLGBGNM_OFFSET))(this);
	}
};
