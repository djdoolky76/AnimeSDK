#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BD3A9F619D176EFE.h"
#include "unitysdk/E68AA4EB51923C98/BAACE4F4B0B3CAB7.h"

#define EA89DBE6DB1EA314_BB32D953709CFC24_OFFSET UNITYSDK_OFFSET(0x181B450)
#define EA89DBE6DB1EA314__CTOR_OFFSET UNITYSDK_OFFSET(0x1678540)

inline static constexpr unsigned int EA89DBE6DB1EA314_TypeDefinitionIndex = 1121;

class EA89DBE6DB1EA314 : public ::BD3A9F619D176EFE
{
public:
	::E68AA4EB51923C98::BAACE4F4B0B3CAB7 E285BE47159C1742; // 0x18

	::System::Boolean BB32D953709CFC24()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EA89DBE6DB1EA314_BB32D953709CFC24_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EA89DBE6DB1EA314__CTOR_OFFSET))(this);
	}
};
