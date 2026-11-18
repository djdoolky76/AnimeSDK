#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AHEAKGPHEKP__CTOR_OFFSET UNITYSDK_OFFSET(0x14351EB0)

inline static constexpr unsigned int AHEAKGPHEKP_TypeDefinitionIndex = 75443;

class AHEAKGPHEKP : public ::System::Object
{
public:
	::System::Int32 JFCIBNANGHP; // 0x10
	::System::Int32 EHDMGHBOJJM; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHEAKGPHEKP__CTOR_OFFSET))(this);
	}
};
