#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Object.h"

#define NKOOFEMNKAA__CTOR_OFFSET UNITYSDK_OFFSET(0x105C97B0)

inline static constexpr unsigned int NKOOFEMNKAA_TypeDefinitionIndex = 58627;

class NKOOFEMNKAA : public ::System::Object
{
public:
	::System::DateTimeOffset FKMFLAIOBJG; // 0x10
	::System::DayOfWeek GOPFPLCFNJK; // 0x20
	::System::Int32 MOMHOPOLNDH; // 0x24
	::System::Boolean IFDCOBKEIHP; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 CMAGKICODDF; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKOOFEMNKAA__CTOR_OFFSET))(this);
	}
};
