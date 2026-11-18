#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoGuideUIConfig; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define NPKAJKNOLGG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFD46020)
#define NPKAJKNOLGG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFD45F60)
#define NPKAJKNOLGG__CTOR_OFFSET UNITYSDK_OFFSET(0xFD46010)

inline static constexpr unsigned int NPKAJKNOLGG_TypeDefinitionIndex = 53702;

class NPKAJKNOLGG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OMKEGKFBGDP; // 0x18
	::MoleMole::MonoGuideUIConfig* DFMKILICPFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKAJKNOLGG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPKAJKNOLGG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NPKAJKNOLGG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
