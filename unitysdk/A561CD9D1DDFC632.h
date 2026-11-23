#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/F904A967EEE7C264.h"

#define A561CD9D1DDFC632__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A561CD9D1DDFC632_TypeDefinitionIndex = 2038;

class A561CD9D1DDFC632 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::F904A967EEE7C264 FB00575C5DDB9FA3; // 0x38
	::System::UInt32 BB0CD91BA7BC1D8F; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A561CD9D1DDFC632__CTOR_OFFSET))(this);
	}
};
