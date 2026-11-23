#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AA69C91B936BE213__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AA69C91B936BE213_TypeDefinitionIndex = 821;

class AA69C91B936BE213 : public ::System::Object
{
public:
	::System::UInt32 AAF2734A4350B230; // 0x10
	::System::Byte _padding0[0x4];
	::System::Int64 B24B51B12566FAE0; // 0x18
	::System::Int64 AE2F0342D210796E; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AA69C91B936BE213__CTOR_OFFSET))(this);
	}
};
