#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/E3D60C1A0BB8FB96.h"

class AB642D1382756991;

#define F931D5CECF9BE2FF__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F931D5CECF9BE2FF_TypeDefinitionIndex = 1117;

class F931D5CECF9BE2FF : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* EEA36A8D4B7507EA; // 0x38
	::System::Boolean BEAD1912A7DA0ECE; // 0x40
	::System::Byte _padding0[0x3];
	::E68AA4EB51923C98::E3D60C1A0BB8FB96 E8A596AC44E741A9; // 0x44
	::System::Boolean FCC7443573DD0222; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F931D5CECF9BE2FF__CTOR_OFFSET))(this);
	}
};
