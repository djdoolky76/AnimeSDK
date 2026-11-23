#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A970A434E9CC38AD/B14E36395867F222.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define E9D7B6E7537F3544__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E9D7B6E7537F3544_TypeDefinitionIndex = 515;

class E9D7B6E7537F3544 : public ::E379DE61A548837D
{
public:
	::System::Int32 FBAFA13454D09FDC; // 0x38
	::System::Byte _padding0[0x4];
	::AB642D1382756991* BFA2323C43D94074; // 0x40
	::ABC::Config::GUID B9BE425168E135E6; // 0x48
	::System::UInt32 E4BF8641C342DF51; // 0x58
	::System::Boolean FFA3A26F9BE03A17; // 0x5C
	::System::Byte _padding1[0x3];
	::A970A434E9CC38AD::B14E36395867F222 EEEDC8703E3461AA; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9D7B6E7537F3544__CTOR_OFFSET))(this);
	}
};
