#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define FC3B50550D9B3F3D__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FC3B50550D9B3F3D_TypeDefinitionIndex = 518;

class FC3B50550D9B3F3D : public ::E379DE61A548837D
{
public:
	::System::UInt32 B40CCD2C400410A5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FC3B50550D9B3F3D__CTOR_OFFSET))(this);
	}
};
