#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E82CD952D4BAE323.h"

#define B099B49FBA3EC0E5_FFE59D93BEA6E2CA_OFFSET UNITYSDK_OFFSET(0x1F270D0)
#define B099B49FBA3EC0E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1F27200)

inline static constexpr unsigned int B099B49FBA3EC0E5_TypeDefinitionIndex = 7594;

class B099B49FBA3EC0E5 : public ::E82CD952D4BAE323
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B099B49FBA3EC0E5__CTOR_OFFSET))(this);
	}

	::System::Void FFE59D93BEA6E2CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B099B49FBA3EC0E5_FFE59D93BEA6E2CA_OFFSET))(this);
	}
};
