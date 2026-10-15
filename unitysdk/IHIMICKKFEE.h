#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBDNNGAILDC.h"

#define IHIMICKKFEE_ANKNMPHKMCM_OFFSET UNITYSDK_OFFSET(0x1EC01D00)
#define IHIMICKKFEE_APDKIDMILAF_OFFSET UNITYSDK_OFFSET(0x1EC02040)
#define IHIMICKKFEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC01CF0)
#define IHIMICKKFEE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC02140)
#define IHIMICKKFEE_DPLFBANCAFP_OFFSET UNITYSDK_OFFSET(0x1EC01FC0)
#define IHIMICKKFEE_GAGFNKBJCHH_OFFSET UNITYSDK_OFFSET(0x1EC01E50)
#define IHIMICKKFEE_LPBCGNCAIOP_OFFSET UNITYSDK_OFFSET(0x1EC020C0)
#define IHIMICKKFEE_MAILBMLFCOP_OFFSET UNITYSDK_OFFSET(0x1EC01F40)
#define IHIMICKKFEE_NKCDEAAKNGO_OFFSET UNITYSDK_OFFSET(0x1EC01D80)
#define IHIMICKKFEE_NOBLGKFAIDM_OFFSET UNITYSDK_OFFSET(0x1EC01EA0)
#define IHIMICKKFEE_OLMHGLHHOEE_OFFSET UNITYSDK_OFFSET(0x1EC01DD0)
#define IHIMICKKFEE_PEAAIHNDOMI_OFFSET UNITYSDK_OFFSET(0x1EC01EF0)

inline static constexpr unsigned int IHIMICKKFEE_TypeDefinitionIndex = 35183;

	class IHIMICKKFEE : public ::OBDNNGAILDC
	{
	public:
		::System::Int32 EDIEODKIHBH; // 0x10
		::System::Byte _padding0[0x4];
		::System::IntPtr MBEMJMJDCLK; // 0x18
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
