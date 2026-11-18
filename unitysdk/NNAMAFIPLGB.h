#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

#define NNAMAFIPLGB_BDKJKJLPJEK_OFFSET UNITYSDK_OFFSET(0x10DAB730)
#define NNAMAFIPLGB_BPPPPMAFIIJ_OFFSET UNITYSDK_OFFSET(0x10DAB5C0)
#define NNAMAFIPLGB_GKLJHGJMMBE_OFFSET UNITYSDK_OFFSET(0x10DAB670)
#define NNAMAFIPLGB_HHDCDCFHGGN_OFFSET UNITYSDK_OFFSET(0x10DAB780)
#define NNAMAFIPLGB_MHDBMGIBIFF_OFFSET UNITYSDK_OFFSET(0x10DAB6C0)
#define NNAMAFIPLGB__CTOR_OFFSET UNITYSDK_OFFSET(0x10DAB5B0)

inline static constexpr unsigned int NNAMAFIPLGB_TypeDefinitionIndex = 66813;

class NNAMAFIPLGB : public ::System::Object
{
public:
	::System::Int32 CHOJBCEJKGB; // 0x10
	::System::Int32 EGEGIMGMJHN; // 0x14
	::System::Nullable_1<::System::Single> MFMMNDAHFAD; // 0x18
	::System::Int32 JGDAHIOOOKH; // 0x20
	::System::Int32 GOKEGHENOGP; // 0x24
	::System::Int32 LDBGFIJDFCN; // 0x28
	::System::Nullable_1<::System::Single> GFLFOMADNNP; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMAFIPLGB__CTOR_OFFSET))(this);
	}

	::System::Single BPPPPMAFIIJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMAFIPLGB_BPPPPMAFIIJ_OFFSET))(this);
	}

	::System::Single GKLJHGJMMBE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMAFIPLGB_GKLJHGJMMBE_OFFSET))(this);
	}

	::System::Single MHDBMGIBIFF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMAFIPLGB_MHDBMGIBIFF_OFFSET))(this);
	}

	::System::Single BDKJKJLPJEK()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMAFIPLGB_BDKJKJLPJEK_OFFSET))(this);
	}

	::System::Single HHDCDCFHGGN()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNAMAFIPLGB_HHDCDCFHGGN_OFFSET))(this);
	}
};
