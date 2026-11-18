#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define PMPDAKLGGHK_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1C1DFF60)
#define PMPDAKLGGHK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C1DFEE0)
#define PMPDAKLGGHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C1DFD70)
#define PMPDAKLGGHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E0110)

inline static constexpr unsigned int PMPDAKLGGHK_TypeDefinitionIndex = 48040;

class PMPDAKLGGHK : public ::IOOIHHOJOPI
{
public:
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPDAKLGGHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PMPDAKLGGHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPDAKLGGHK_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMPDAKLGGHK_KGEBDLGBGNM_OFFSET))(this);
	}
};
