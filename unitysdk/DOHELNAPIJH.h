#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define DOHELNAPIJH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1BC8C0)

inline static constexpr unsigned int DOHELNAPIJH_TypeDefinitionIndex = 93777;

class DOHELNAPIJH : public ::BIHPBFHEOOA
{
public:
	::System::UInt32 HDGIELLOOEF; // 0x10
	::System::UInt32 LEHABHCOMGH; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOHELNAPIJH__CTOR_OFFSET))(this);
	}
};
