#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define E6D1D6116424A990__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E6D1D6116424A990_TypeDefinitionIndex = 2077;

class E6D1D6116424A990 : public ::E379DE61A548837D
{
public:
	::System::UInt32 B240C78BB6BC8182; // 0x38
	::System::Boolean AE89278D3AC6E8B5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6D1D6116424A990__CTOR_OFFSET))(this);
	}
};
