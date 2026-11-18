#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define GIPLCOJMGEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CC9720)
#define GIPLCOJMGEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CC9640)
#define GIPLCOJMGEB__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC9710)

inline static constexpr unsigned int GIPLCOJMGEB_TypeDefinitionIndex = 74041;

class GIPLCOJMGEB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MBKACMJJMBH; // 0x18
	::UnityEngine::RectTransform* GAKDCBEBPCF; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPLCOJMGEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIPLCOJMGEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIPLCOJMGEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
