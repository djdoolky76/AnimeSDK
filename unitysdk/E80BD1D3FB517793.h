#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/B5174987DE13FB49.h"

#define E80BD1D3FB517793__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E80BD1D3FB517793_TypeDefinitionIndex = 8885;

class E80BD1D3FB517793 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::B5174987DE13FB49 EBD22A72A4CC8782; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E80BD1D3FB517793__CTOR_OFFSET))(this);
	}
};
