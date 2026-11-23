#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E9F68A58DDE88B4D.h"

#define A9D922B2316F6AEF_FEBA495D7EBB1A54_OFFSET UNITYSDK_OFFSET(0x20A9370)
#define A9D922B2316F6AEF__CTOR_OFFSET UNITYSDK_OFFSET(0x17086F0)

inline static constexpr unsigned int A9D922B2316F6AEF_TypeDefinitionIndex = 8590;

class A9D922B2316F6AEF : public ::E9F68A58DDE88B4D
{
public:
	::System::Boolean FEBA495D7EBB1A54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A9D922B2316F6AEF_FEBA495D7EBB1A54_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A9D922B2316F6AEF__CTOR_OFFSET))(this);
	}
};
