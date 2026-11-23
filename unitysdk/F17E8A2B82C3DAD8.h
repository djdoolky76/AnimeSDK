#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E9F68A58DDE88B4D.h"

#define F17E8A2B82C3DAD8_FEBA495D7EBB1A54_OFFSET UNITYSDK_OFFSET(0x22B68B0)
#define F17E8A2B82C3DAD8__CTOR_OFFSET UNITYSDK_OFFSET(0x17086F0)

inline static constexpr unsigned int F17E8A2B82C3DAD8_TypeDefinitionIndex = 7152;

class F17E8A2B82C3DAD8 : public ::E9F68A58DDE88B4D
{
public:
	::System::Boolean FEBA495D7EBB1A54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + F17E8A2B82C3DAD8_FEBA495D7EBB1A54_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F17E8A2B82C3DAD8__CTOR_OFFSET))(this);
	}
};
