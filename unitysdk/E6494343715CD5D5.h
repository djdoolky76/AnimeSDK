#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class A6EF590088EA17E7;
class EBDA19E1C5E8D6D8;

#define E6494343715CD5D5__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E6494343715CD5D5_TypeDefinitionIndex = 7065;

class E6494343715CD5D5 : public ::E379DE61A548837D
{
public:
	::System::UInt32 ABDF7A7F17C451A0; // 0x38
	::System::Byte _padding0[0x4];
	::EBDA19E1C5E8D6D8* E6C7EB5F3108F54B; // 0x40
	::A6EF590088EA17E7* FB522C0C99D153F7; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6494343715CD5D5__CTOR_OFFSET))(this);
	}
};
