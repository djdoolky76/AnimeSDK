#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E9F68A58DDE88B4D.h"

#define E5F2191418BB3FF7_FEBA495D7EBB1A54_OFFSET UNITYSDK_OFFSET(0x1F2F180)
#define E5F2191418BB3FF7__CTOR_OFFSET UNITYSDK_OFFSET(0x17086F0)

inline static constexpr unsigned int E5F2191418BB3FF7_TypeDefinitionIndex = 7636;

class E5F2191418BB3FF7 : public ::E9F68A58DDE88B4D
{
public:
	::System::Boolean FEBA495D7EBB1A54()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E5F2191418BB3FF7_FEBA495D7EBB1A54_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5F2191418BB3FF7__CTOR_OFFSET))(this);
	}
};
