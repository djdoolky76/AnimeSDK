#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define E0F63C51CACA0222__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E0F63C51CACA0222_TypeDefinitionIndex = 517;

class E0F63C51CACA0222 : public ::E379DE61A548837D
{
public:
	::System::Int32 FBAFA13454D09FDC; // 0x38
	::System::Byte _padding0[0x4];
	::AB642D1382756991* BFA2323C43D94074; // 0x40
	::System::Boolean FFA3A26F9BE03A17; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E0F63C51CACA0222__CTOR_OFFSET))(this);
	}
};
