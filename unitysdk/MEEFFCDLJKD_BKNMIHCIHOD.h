#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define MEEFFCDLJKD_BKNMIHCIHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x991F70)

inline static constexpr unsigned int MEEFFCDLJKD_BKNMIHCIHOD_TypeDefinitionIndex = 96611;

struct alignas(4) MEEFFCDLJKD_BKNMIHCIHOD
{
	::System::Int32 EBCHCKILAFJ; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x14
	::System::Boolean APGOIJNAFBI; // 0x18
	::System::Boolean NAMDEANPBJF; // 0x19
	::System::Boolean FHNHPINFLAA; // 0x1A

	::System::Void _ctor(::System::Int32 EBCHCKILAFJ, ::System::Int32 ABHBKFJKINO, ::System::Boolean APGOIJNAFBI, ::System::Boolean NAMDEANPBJF, ::System::Boolean FHNHPINFLAA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MEEFFCDLJKD_BKNMIHCIHOD__CTOR_OFFSET))(this, EBCHCKILAFJ, ABHBKFJKINO, APGOIJNAFBI, NAMDEANPBJF, FHNHPINFLAA);
	}
};
