#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DOKPKFDLENO;
namespace System { class Action; }

#define DOKPKFDLENO_GLHNEJBLPCJ_AFBCJACLDLP_OFFSET UNITYSDK_OFFSET(0x7FDDF40)
#define DOKPKFDLENO_GLHNEJBLPCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x7FDDF30)

inline static constexpr unsigned int DOKPKFDLENO_GLHNEJBLPCJ_TypeDefinitionIndex = 70912;

class DOKPKFDLENO_GLHNEJBLPCJ : public ::System::Object
{
public:
	::System::Action* PABLEDCGDGM; // 0x10
	::DOKPKFDLENO* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKPKFDLENO_GLHNEJBLPCJ__CTOR_OFFSET))(this);
	}

	::System::Void AFBCJACLDLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOKPKFDLENO_GLHNEJBLPCJ_AFBCJACLDLP_OFFSET))(this);
	}
};
