#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"
#include "unitysdk/FFGGDNGAGEL.h"

#define KGDALFCOIMC_DPFLFHEBKJM_OFFSET UNITYSDK_OFFSET(0x1F7349E0)
#define KGDALFCOIMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7349D0)

inline static constexpr unsigned int KGDALFCOIMC_TypeDefinitionIndex = 95383;

class KGDALFCOIMC : public ::CGGLJLECNJM
{
public:
	::System::UInt64 DMOBAILKKEG; // 0x20
	::System::Int32 MMMKLFNLLCD; // 0x28
	::System::UInt32 HDGIELLOOEF; // 0x2C
	::System::UInt32 MGMDLMBEDJF; // 0x30
	::System::Boolean FMGKEOLOOIK; // 0x34
	::System::Byte _padding0[0x3];
	::System::Int32 MKCOMJHINNJ; // 0x38
	::System::Int32 LDNBELOEOOA; // 0x3C
	::System::UInt32 KEGBFANEPBJ; // 0x40
	::System::UInt32 MKGLHHPNCMN; // 0x44
	::System::Int32 OHMFNPBKMHH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDALFCOIMC__CTOR_OFFSET))(this);
	}

	::FFGGDNGAGEL DPFLFHEBKJM()
	{
		return ((::FFGGDNGAGEL(*)(::PVOID))((::PBYTE)hIl2Cpp + KGDALFCOIMC_DPFLFHEBKJM_OFFSET))(this);
	}
};
