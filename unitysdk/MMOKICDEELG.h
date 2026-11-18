#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

#define MMOKICDEELG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF63280)

inline static constexpr unsigned int MMOKICDEELG_TypeDefinitionIndex = 11356;

class MMOKICDEELG : public ::System::Object
{
public:
	::System::DateTime AICHFKIBENF; // 0x10
	::System::Int32 OIKFFGKDHME; // 0x18
	::System::Byte _padding0[0x4];
	::System::DateTime IOMPEGPDBHB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOKICDEELG__CTOR_OFFSET))(this);
	}
};
