#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/E3D60C1A0BB8FB96.h"

class AB12822C4406B00F;

#define BE7E7B172DBBAFC3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BE7E7B172DBBAFC3_TypeDefinitionIndex = 2297;

class BE7E7B172DBBAFC3 : public ::E379DE61A548837D
{
public:
	::E68AA4EB51923C98::E3D60C1A0BB8FB96 E8A596AC44E741A9; // 0x38
	::System::Byte _padding0[0x4];
	::AB12822C4406B00F* E503CF3EAE138E9D; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE7E7B172DBBAFC3__CTOR_OFFSET))(this);
	}
};
