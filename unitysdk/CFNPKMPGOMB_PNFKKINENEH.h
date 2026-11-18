#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CFNPKMPGOMB_PNFKKINENEH_LMIEHGFPIOA_OFFSET UNITYSDK_OFFSET(0x16A232C0)
#define CFNPKMPGOMB_PNFKKINENEH__CTOR_OFFSET UNITYSDK_OFFSET(0x16A232B0)

inline static constexpr unsigned int CFNPKMPGOMB_PNFKKINENEH_TypeDefinitionIndex = 44982;

class CFNPKMPGOMB_PNFKKINENEH : public ::System::Object
{
public:
	::System::Action* ODOKCKFCKHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_PNFKKINENEH__CTOR_OFFSET))(this);
	}

	::System::Void LMIEHGFPIOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_PNFKKINENEH_LMIEHGFPIOA_OFFSET))(this);
	}
};
