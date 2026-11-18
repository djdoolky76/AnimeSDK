#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BPNGLLLIMDC_NNEGDLLKIMC__CTOR_OFFSET UNITYSDK_OFFSET(0x11406130)

inline static constexpr unsigned int BPNGLLLIMDC_NNEGDLLKIMC_TypeDefinitionIndex = 56041;

class BPNGLLLIMDC_NNEGDLLKIMC : public ::System::Object
{
public:
	::System::Boolean LHFBNKOPGJO; // 0x10
	::System::Boolean JNALNLLBJAA; // 0x11
	::System::Boolean LJIEMDNJNAA; // 0x12
	::System::Boolean AOLKFIKCNOH; // 0x13
	::System::Boolean LCAJMDLLJNK; // 0x14
	::System::Byte _padding0[0x3];
	::System::Int32 PGBOIPOEEFL; // 0x18
	::System::UInt32 NFACFCMFNEC; // 0x1C
	::System::UInt32 DGEBDBEOEFO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPNGLLLIMDC_NNEGDLLKIMC__CTOR_OFFSET))(this);
	}
};
