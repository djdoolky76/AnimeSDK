#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBDNNGAILDC.h"
namespace System::IO { class UnmanagedMemoryAccessor; }

#define DALMMKMDHOP_ANKNMPHKMCM_OFFSET UNITYSDK_OFFSET(0x1EBD1150)
#define DALMMKMDHOP_APDKIDMILAF_OFFSET UNITYSDK_OFFSET(0x1EBD2000)
#define DALMMKMDHOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBD1140)
#define DALMMKMDHOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EBD23A0)
#define DALMMKMDHOP_DPLFBANCAFP_OFFSET UNITYSDK_OFFSET(0x1EBD1E30)
#define DALMMKMDHOP_GAGFNKBJCHH_OFFSET UNITYSDK_OFFSET(0x1EBD16F0)
#define DALMMKMDHOP_LPBCGNCAIOP_OFFSET UNITYSDK_OFFSET(0x1EBD21D0)
#define DALMMKMDHOP_MAILBMLFCOP_OFFSET UNITYSDK_OFFSET(0x1EBD1C60)
#define DALMMKMDHOP_NKCDEAAKNGO_OFFSET UNITYSDK_OFFSET(0x1EBD1340)
#define DALMMKMDHOP_NOBLGKFAIDM_OFFSET UNITYSDK_OFFSET(0x1EBD18C0)
#define DALMMKMDHOP_OLMHGLHHOEE_OFFSET UNITYSDK_OFFSET(0x1EBD1520)
#define DALMMKMDHOP_PEAAIHNDOMI_OFFSET UNITYSDK_OFFSET(0x1EBD1A90)

inline static constexpr unsigned int DALMMKMDHOP_TypeDefinitionIndex = 35186;

	class DALMMKMDHOP : public ::OBDNNGAILDC
	{
	public:
		::System::IO::UnmanagedMemoryAccessor* MLOLOOBAFIF; // 0x10
		::System::Void _ctor(::System::IO::UnmanagedMemoryAccessor* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::UnmanagedMemoryAccessor*))((::PBYTE)hIl2Cpp + DALMMKMDHOP_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean ANKNMPHKMCM(::System::Int64 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DALMMKMDHOP_ANKNMPHKMCM_OFFSET))(this, a1);
		}

		::System::Byte NKCDEAAKNGO(::System::Int64 a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DALMMKMDHOP_NKCDEAAKNGO_OFFSET))(this, a1);
		}

		::System::Char OLMHGLHHOEE(::System::Int64 a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DALMMKMDHOP_OLMHGLHHOEE_OFFSET))(this, a1);
		}

		::System::Int16 GAGFNKBJCHH(::System::Int64 a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DALMMKMDHOP_GAGFNKBJCHH_OFFSET))(this, a1);
		}

		::System::Int32 NOBLGKFAIDM(::System::Int64 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DALMMKMDHOP_NOBLGKFAIDM_OFFSET))(this, a1);
		}

		::System::Int64 PEAAIHNDOMI(::System::Int64 a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DALMMKMDHOP_PEAAIHNDOMI_OFFSET))(this, a1);
		}

		::System::UInt16 MAILBMLFCOP(::System::Int64 a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DALMMKMDHOP_MAILBMLFCOP_OFFSET))(this, a1);
		}

		::System::UInt32 DPLFBANCAFP(::System::Int64 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DALMMKMDHOP_DPLFBANCAFP_OFFSET))(this, a1);
		}

		::System::UInt64 APDKIDMILAF(::System::Int64 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DALMMKMDHOP_APDKIDMILAF_OFFSET))(this, a1);
		}

		::System::SByte LPBCGNCAIOP(::System::Int64 a1)
		{
			return ((::System::SByte(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + DALMMKMDHOP_LPBCGNCAIOP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DALMMKMDHOP_DISPOSE_OFFSET))(this);
		}

	};
