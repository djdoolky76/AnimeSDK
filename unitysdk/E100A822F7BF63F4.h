#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A970A434E9CC38AD/F47E8EB23DF6A96B.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;

#define E100A822F7BF63F4__CTOR_OFFSET UNITYSDK_OFFSET(0x17F11E0)

inline static constexpr unsigned int E100A822F7BF63F4_TypeDefinitionIndex = 1013;

class E100A822F7BF63F4 : public ::E379DE61A548837D
{
public:
	::AB642D1382756991* BB52511EEFE63290; // 0x38
	::AB642D1382756991* F2B1CDEC5D5AD221; // 0x40
	::System::Int32 FE0FEFAB7EB106A6; // 0x48
	::System::Int32 BCBB361F3DC22980; // 0x4C
	::System::Boolean E4C645A3D60D5AF1; // 0x50
	::System::Byte _padding0[0x3];
	::A970A434E9CC38AD::F47E8EB23DF6A96B E276AF38E00EDD63; // 0x54
	::System::Single A5B33AB956958EBC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E100A822F7BF63F4__CTOR_OFFSET))(this);
	}
};
