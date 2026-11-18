#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LAIAGPCHMGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16354760)

inline static constexpr unsigned int LAIAGPCHMGJ_TypeDefinitionIndex = 88411;

class LAIAGPCHMGJ : public ::System::Object
{
public:
	::System::Int32 FDOGGANACAP; // 0x10
	::System::Int32 DBGJNFKBEJK; // 0x14
	::System::Int32 NONNKHPPDIO; // 0x18
	::System::Int32 GMMOEODOKBI; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAIAGPCHMGJ__CTOR_OFFSET))(this);
	}
};
