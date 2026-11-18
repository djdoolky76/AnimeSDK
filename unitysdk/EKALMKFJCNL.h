#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define EKALMKFJCNL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17241EC0)
#define EKALMKFJCNL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17241E30)
#define EKALMKFJCNL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17241C60)
#define EKALMKFJCNL__CTOR_OFFSET UNITYSDK_OFFSET(0x17241EB0)

inline static constexpr unsigned int EKALMKFJCNL_TypeDefinitionIndex = 50995;

class EKALMKFJCNL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x18
	::UnityEngine::RectTransform* IMDLHCPGEDN; // 0x20
	::UnityEngine::RectTransform* BDHEEDBEIKP; // 0x28
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x30
	::UnityEngine::RectTransform* HGEBIMKDLGB; // 0x38
	::UnityEngine::UI::Extension::UITabButton* OEPAJHOAAAI; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKALMKFJCNL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKALMKFJCNL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKALMKFJCNL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKALMKFJCNL_KGEBDLGBGNM_OFFSET))(this);
	}
};
