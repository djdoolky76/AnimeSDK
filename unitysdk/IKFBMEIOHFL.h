#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define IKFBMEIOHFL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x160B1510)
#define IKFBMEIOHFL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x160B1430)
#define IKFBMEIOHFL__CTOR_OFFSET UNITYSDK_OFFSET(0x160B1500)

inline static constexpr unsigned int IKFBMEIOHFL_TypeDefinitionIndex = 38727;

class IKFBMEIOHFL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MBKACMJJMBH; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::RectTransform* GAKDCBEBPCF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKFBMEIOHFL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKFBMEIOHFL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKFBMEIOHFL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
