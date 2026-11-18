#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFMBPJAFAJC.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/IGBEOBJDCJM.h"

class KGBFLHNJHHN;

#define NFMNIIOLNKL_CEFLAPLJHJM_OFFSET UNITYSDK_OFFSET(0x19DC31A0)
#define NFMNIIOLNKL_HDMJLIACNIG_OFFSET UNITYSDK_OFFSET(0x19DC31B0)
#define NFMNIIOLNKL_NMABHLDKKFI_OFFSET UNITYSDK_OFFSET(0x19DC3180)
#define NFMNIIOLNKL_PJEJNPACOHC_OFFSET UNITYSDK_OFFSET(0x19DC3190)
#define NFMNIIOLNKL__CTOR_OFFSET UNITYSDK_OFFSET(0x19DC3170)

inline static constexpr unsigned int NFMNIIOLNKL_TypeDefinitionIndex = 17482;

class NFMNIIOLNKL : public ::AFMBPJAFAJC
{
public:
	::System::Boolean _CBNKPHJOLKH_k__BackingField; // 0x70
	::System::Byte _padding0[0x3];
	::System::ValueTuple_2<::System::Int32, ::System::Int32> _NMLCADLMCGJ_k__BackingField; // 0x74

	::System::Void _ctor(::IGBEOBJDCJM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IGBEOBJDCJM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NFMNIIOLNKL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void NMABHLDKKFI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NFMNIIOLNKL_NMABHLDKKFI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PJEJNPACOHC(::System::ValueTuple_2<::System::Int32, ::System::Int32> EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::ValueTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + NFMNIIOLNKL_PJEJNPACOHC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::ValueTuple_2<::System::Int32, ::System::Int32> CEFLAPLJHJM()
	{
		return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMNIIOLNKL_CEFLAPLJHJM_OFFSET))(this);
	}

	::System::Boolean HDMJLIACNIG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NFMNIIOLNKL_HDMJLIACNIG_OFFSET))(this);
	}
};
