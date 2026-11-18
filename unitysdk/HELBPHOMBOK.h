#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENFBHECMOOI.h"
#include "unitysdk/PHADELPHLDI.h"
#include "unitysdk/System/Object.h"

#define HELBPHOMBOK__CTOR_OFFSET UNITYSDK_OFFSET(0x17A40D70)

inline static constexpr unsigned int HELBPHOMBOK_TypeDefinitionIndex = 86934;

class HELBPHOMBOK : public ::System::Object
{
public:
	::PHADELPHLDI DDDGPLJNPBP; // 0x10
	::System::Int32 ABHBKFJKINO; // 0x14
	::System::Boolean PCKJCJJEGMB; // 0x18
	::System::Boolean KCJEBINBDPG; // 0x19
	::System::Byte _padding0[0x2];
	::ENFBHECMOOI FCOMBIHDACL; // 0x1C
	::System::UInt32 MGMDLMBEDJF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELBPHOMBOK__CTOR_OFFSET))(this);
	}
};
