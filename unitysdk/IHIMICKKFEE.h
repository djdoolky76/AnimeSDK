#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBDNNGAILDC.h"

#define IHIMICKKFEE_ANKNMPHKMCM_OFFSET UNITYSDK_OFFSET(0x1EC2F380)
#define IHIMICKKFEE_APDKIDMILAF_OFFSET UNITYSDK_OFFSET(0x1EC2F6C0)
#define IHIMICKKFEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC2F370)
#define IHIMICKKFEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC2F7C0)
#define IHIMICKKFEE_DPLFBANCAFP_OFFSET UNITYSDK_OFFSET(0x1EC2F640)
#define IHIMICKKFEE_GAGFNKBJCHH_OFFSET UNITYSDK_OFFSET(0x1EC2F4D0)
#define IHIMICKKFEE_LPBCGNCAIOP_OFFSET UNITYSDK_OFFSET(0x1EC2F740)
#define IHIMICKKFEE_MAILBMLFCOP_OFFSET UNITYSDK_OFFSET(0x1EC2F5C0)
#define IHIMICKKFEE_NKCDEAAKNGO_OFFSET UNITYSDK_OFFSET(0x1EC2F400)
#define IHIMICKKFEE_NOBLGKFAIDM_OFFSET UNITYSDK_OFFSET(0x1EC2F520)
#define IHIMICKKFEE_OLMHGLHHOEE_OFFSET UNITYSDK_OFFSET(0x1EC2F450)
#define IHIMICKKFEE_PEAAIHNDOMI_OFFSET UNITYSDK_OFFSET(0x1EC2F570)

	class IHIMICKKFEE : public ::OBDNNGAILDC
	{
	public:
		::System::IntPtr MBEMJMJDCLK; // 0x10
		::System::Int32 EDIEODKIHBH; // 0x18
		::System::Void _ctor(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + IHIMICKKFEE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean ANKNMPHKMCM(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IHIMICKKFEE_ANKNMPHKMCM_OFFSET))(this, a1);
		}

		::System::Byte NKCDEAAKNGO(::System::Int64 a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IHIMICKKFEE_NKCDEAAKNGO_OFFSET))(this, a1);
		}

		::System::Char OLMHGLHHOEE(::System::Int64 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IHIMICKKFEE_OLMHGLHHOEE_OFFSET))(this, a1);
		}

		::System::Int16 GAGFNKBJCHH(::System::Int64 a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IHIMICKKFEE_GAGFNKBJCHH_OFFSET))(this, a1);
		}

		::System::Int32 NOBLGKFAIDM(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IHIMICKKFEE_NOBLGKFAIDM_OFFSET))(this, a1);
		}

		::System::Int64 PEAAIHNDOMI(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IHIMICKKFEE_PEAAIHNDOMI_OFFSET))(this, a1);
		}

		::System::UInt16 MAILBMLFCOP(::System::Int64 a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IHIMICKKFEE_MAILBMLFCOP_OFFSET))(this, a1);
		}

		::System::UInt32 DPLFBANCAFP(::System::Int64 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IHIMICKKFEE_DPLFBANCAFP_OFFSET))(this, a1);
		}

		::System::UInt64 APDKIDMILAF(::System::Int64 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IHIMICKKFEE_APDKIDMILAF_OFFSET))(this, a1);
		}

		::System::SByte LPBCGNCAIOP(::System::Int64 a1)
		{
			return ((::System::SByte(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IHIMICKKFEE_LPBCGNCAIOP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHIMICKKFEE_DISPOSE_OFFSET))(this);
		}

	};
