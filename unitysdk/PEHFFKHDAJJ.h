#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define PEHFFKHDAJJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A7ED400)
#define PEHFFKHDAJJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A7ED360)
#define PEHFFKHDAJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7ED3F0)

inline static constexpr unsigned int PEHFFKHDAJJ_TypeDefinitionIndex = 50849;

class PEHFFKHDAJJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PKEHMPGEFHO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEHFFKHDAJJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEHFFKHDAJJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PEHFFKHDAJJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
