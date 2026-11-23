#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseBank.h"
#include "unitysdk/E379DE61A548837D.h"

template <typename T> class FA9B773E8C9B97E9;

#define A1F4661D6F2E32C1__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A1F4661D6F2E32C1_TypeDefinitionIndex = 7345;

class A1F4661D6F2E32C1 : public ::E379DE61A548837D
{
public:
	::FA9B773E8C9B97E9<::ABC::Config::WwiseBank>* AB7F86FCC2BAE8EA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A1F4661D6F2E32C1__CTOR_OFFSET))(this);
	}
};
