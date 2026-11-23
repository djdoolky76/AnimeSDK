#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/E3D60C1A0BB8FB96.h"

#define B6D030BF2711C2FB__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int B6D030BF2711C2FB_TypeDefinitionIndex = 526;

class B6D030BF2711C2FB : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::E3D60C1A0BB8FB96 E8A596AC44E741A9; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B6D030BF2711C2FB__CTOR_OFFSET))(this);
	}
};
