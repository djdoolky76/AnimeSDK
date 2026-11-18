#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define LNECKGOIFPM_DDENHABIENM_OFFSET UNITYSDK_OFFSET(0x7FE790)
#define LNECKGOIFPM_FAKPMICPIFI_OFFSET UNITYSDK_OFFSET(0x7FE8C0)
#define LNECKGOIFPM_HBCANAJLCOF_OFFSET UNITYSDK_OFFSET(0x7FE910)
#define LNECKGOIFPM_JJICKCLDGFH_OFFSET UNITYSDK_OFFSET(0x7FE7B0)
#define LNECKGOIFPM_JNBGBKMJGAG_OFFSET UNITYSDK_OFFSET(0x7FE860)
#define LNECKGOIFPM_LOOIPKMKKDJ_OFFSET UNITYSDK_OFFSET(0x7FE7A0)
#define LNECKGOIFPM_MBACIDAONHG_OFFSET UNITYSDK_OFFSET(0x7FE9C0)

inline static constexpr unsigned int LNECKGOIFPM_TypeDefinitionIndex = 76480;

struct alignas(4) LNECKGOIFPM
{
	::System::UInt64 EAACBDPBKCO; // 0x10
	::System::UInt64 POECIFKEMGH; // 0x18
	::System::UInt64 DEHMKHOMKAL; // 0x20
	::System::UInt64 CJFBGBICGCL; // 0x28
	::System::UInt64 DIPHOLPCBPL; // 0x30
	::System::UInt64 KGLLIKDCFJP; // 0x38
	::System::UInt64 KFOAEBHNDBH; // 0x40
	::System::UInt64 BMJCFCMDIOB; // 0x48
	::System::Byte NLHCLAPACFE; // 0x50

	::System::Void DDENHABIENM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNECKGOIFPM_DDENHABIENM_OFFSET))(this);
	}

	::System::Void LOOIPKMKKDJ(::System::Int32 ABHBKFJKINO, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LNECKGOIFPM_LOOIPKMKKDJ_OFFSET))(this, ABHBKFJKINO, EGEGIMGMJHN);
	}

	::System::Boolean JJICKCLDGFH(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LNECKGOIFPM_JJICKCLDGFH_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void JNBGBKMJGAG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNECKGOIFPM_JNBGBKMJGAG_OFFSET))(this);
	}

	::System::Boolean FAKPMICPIFI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNECKGOIFPM_FAKPMICPIFI_OFFSET))(this);
	}

	::System::Void HBCANAJLCOF(::System::UInt64& MDLNMDJMMJP, ::System::Int32 LPLKMLFMFBK, ::System::Int32 EFMODEHHJJG, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64&, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + LNECKGOIFPM_HBCANAJLCOF_OFFSET))(this, MDLNMDJMMJP, LPLKMLFMFBK, EFMODEHHJJG, EGEGIMGMJHN);
	}

	::System::UInt64 MBACIDAONHG(::System::Int32 HPDBGHLLHLD)
	{
		return ((::System::UInt64(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LNECKGOIFPM_MBACIDAONHG_OFFSET))(this, HPDBGHLLHLD);
	}
};
