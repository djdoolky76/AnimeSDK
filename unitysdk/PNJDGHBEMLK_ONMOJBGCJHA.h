#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PNJDGHBEMLK_ONMOJBGCJHA_JEPCKIPDDCP_OFFSET UNITYSDK_OFFSET(0x1EBBD0A0)
#define PNJDGHBEMLK_ONMOJBGCJHA__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBBD090)

inline static constexpr unsigned int PNJDGHBEMLK_ONMOJBGCJHA_TypeDefinitionIndex = 64985;

class PNJDGHBEMLK_ONMOJBGCJHA : public ::System::Object
{
public:
	::System::Action* IHLBALNBGKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_ONMOJBGCJHA__CTOR_OFFSET))(this);
	}

	::System::Void JEPCKIPDDCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNJDGHBEMLK_ONMOJBGCJHA_JEPCKIPDDCP_OFFSET))(this);
	}
};
