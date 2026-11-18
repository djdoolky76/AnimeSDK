#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MJJAEOHOEGD__CTOR_OFFSET UNITYSDK_OFFSET(0x1216B290)

inline static constexpr unsigned int MJJAEOHOEGD_TypeDefinitionIndex = 63918;

class MJJAEOHOEGD : public ::System::Object
{
public:
	::System::Boolean BKHGJAGELAF; // 0x10
	::System::Byte _padding0[0x3];
	::System::Int32 CFNMLBJOGBJ; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJJAEOHOEGD__CTOR_OFFSET))(this);
	}
};
