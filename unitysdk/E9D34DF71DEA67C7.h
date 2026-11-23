#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseState.h"
#include "unitysdk/E379DE61A548837D.h"

#define E9D34DF71DEA67C7__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E9D34DF71DEA67C7_TypeDefinitionIndex = 8105;

class E9D34DF71DEA67C7 : public ::E379DE61A548837D
{
public:
	::ABC::Config::WwiseState F562DA1C00CE60C6; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9D34DF71DEA67C7__CTOR_OFFSET))(this);
	}
};
