#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define MIMKGHBBBHJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14DEA5F0)
#define MIMKGHBBBHJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14DEA550)
#define MIMKGHBBBHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEA5E0)

inline static constexpr unsigned int MIMKGHBBBHJ_TypeDefinitionIndex = 58962;

class MIMKGHBBBHJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIMKGHBBBHJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIMKGHBBBHJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIMKGHBBBHJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
