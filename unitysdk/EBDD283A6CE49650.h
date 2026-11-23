#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/E379DE61A548837D.h"

#define EBDD283A6CE49650__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EBDD283A6CE49650_TypeDefinitionIndex = 6715;

class EBDD283A6CE49650 : public ::E379DE61A548837D
{
public:
	::ABC::Config::GUID ACC4695EBAE594B8; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBDD283A6CE49650__CTOR_OFFSET))(this);
	}
};
