#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GEGKDDOBMON_HJEADGLNKHB_DBEIPMJOHNB_OFFSET UNITYSDK_OFFSET(0x15F16970)
#define GEGKDDOBMON_HJEADGLNKHB__CTOR_OFFSET UNITYSDK_OFFSET(0x15F16960)

inline static constexpr unsigned int GEGKDDOBMON_HJEADGLNKHB_TypeDefinitionIndex = 58068;

class GEGKDDOBMON_HJEADGLNKHB : public ::System::Object
{
public:
	::System::Int32 DIEEDEBJCMP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGKDDOBMON_HJEADGLNKHB__CTOR_OFFSET))(this);
	}

	::System::Void DBEIPMJOHNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEGKDDOBMON_HJEADGLNKHB_DBEIPMJOHNB_OFFSET))(this);
	}
};
