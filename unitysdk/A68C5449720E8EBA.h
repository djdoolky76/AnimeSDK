#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A970A434E9CC38AD/B14E36395867F222.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define A68C5449720E8EBA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A68C5449720E8EBA_TypeDefinitionIndex = 1592;

class A68C5449720E8EBA : public ::E379DE61A548837D
{
public:
	::System::Int32 FBAFA13454D09FDC; // 0x38
	::System::Byte _padding0[0x4];
	::AB642D1382756991* BFA2323C43D94074; // 0x40
	::AB642D1382756991* EEA36A8D4B7507EA; // 0x48
	::System::UInt32 E4BF8641C342DF51; // 0x50
	::System::Boolean FFA3A26F9BE03A17; // 0x54
	::System::Byte _padding1[0x3];
	::A970A434E9CC38AD::B14E36395867F222 EEEDC8703E3461AA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A68C5449720E8EBA__CTOR_OFFSET))(this);
	}
};
