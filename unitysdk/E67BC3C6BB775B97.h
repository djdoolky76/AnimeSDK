#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EBBFE554897B6EE2/E3B0DE2D6F895DD0.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;

#define E67BC3C6BB775B97__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E67BC3C6BB775B97_TypeDefinitionIndex = 1255;

class E67BC3C6BB775B97 : public ::System::Object
{
public:
	::AB642D1382756991* E3BB753F088D29E3; // 0x10
	::System::UInt64 B70991CAB8C4B95E; // 0x18
	::System::Single F62AA09BAFF40A9D; // 0x20
	::System::Single FF588765AE3752D1; // 0x24
	::System::Boolean BB14E9CF431F0975; // 0x28
	::System::Boolean AB647BF5882A7670; // 0x29
	::System::Boolean FCB3968D442DD951; // 0x2A
	::System::Byte _padding0[0x1];
	::EBBFE554897B6EE2::E3B0DE2D6F895DD0 F115FA1EDA6D1617; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E67BC3C6BB775B97__CTOR_OFFSET))(this);
	}
};
