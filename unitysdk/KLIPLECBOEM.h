#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

class GOHMGCMIACH;
class LMIHGLECLLA;

#define KLIPLECBOEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED47230)

inline static constexpr unsigned int KLIPLECBOEM_TypeDefinitionIndex = 94599;

class KLIPLECBOEM : public ::BIHPBFHEOOA
{
public:
	::LMIHGLECLLA* FICGHFBOIKJ; // 0x10
	::GOHMGCMIACH* JLIIPCAFIMH; // 0x18
	::System::UInt32 MKGLHHPNCMN; // 0x20
	::System::UInt32 PEKGHNLLDAK; // 0x24
	::System::UInt32 KKMENMCMMBN; // 0x28
	::System::Boolean LFPIKGNKOLM; // 0x2C
	::System::Byte _padding0[0x3];
	::System::UInt32 KEGBFANEPBJ; // 0x30
	::System::UInt32 HDGIELLOOEF; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLIPLECBOEM__CTOR_OFFSET))(this);
	}
};
