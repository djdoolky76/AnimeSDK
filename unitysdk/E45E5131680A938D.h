#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/System/Object.h"

class AB642D1382756991;

#define E45E5131680A938D__CTOR_OFFSET UNITYSDK_OFFSET(0x1C03AD0)

inline static constexpr unsigned int E45E5131680A938D_TypeDefinitionIndex = 376;

class E45E5131680A938D : public ::System::Object
{
public:
	::System::Boolean E807032DD6B6A94F; // 0x10
	::System::Byte _padding0[0x7];
	::AB642D1382756991* A9821CE3A1C5233E; // 0x18
	::ABC::Config::GUID B9BE425168E135E6; // 0x20
	::System::UInt32 B6B6F09B79A3F34C; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E45E5131680A938D__CTOR_OFFSET))(this);
	}
};
