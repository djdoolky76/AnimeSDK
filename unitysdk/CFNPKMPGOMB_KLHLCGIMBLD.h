#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CFNPKMPGOMB_KLHLCGIMBLD_OEKOBHOPKLJ_OFFSET UNITYSDK_OFFSET(0x1478E050)
#define CFNPKMPGOMB_KLHLCGIMBLD__CTOR_OFFSET UNITYSDK_OFFSET(0x1478E040)

inline static constexpr unsigned int CFNPKMPGOMB_KLHLCGIMBLD_TypeDefinitionIndex = 44981;

class CFNPKMPGOMB_KLHLCGIMBLD : public ::System::Object
{
public:
	::System::Action* BKLLGFGNNPL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_KLHLCGIMBLD__CTOR_OFFSET))(this);
	}

	::System::Void OEKOBHOPKLJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_KLHLCGIMBLD_OEKOBHOPKLJ_OFFSET))(this);
	}
};
