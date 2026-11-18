#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOLNPGEMPBM.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define DCFKNANFOHI_BKOLHKHILLK_OFFSET UNITYSDK_OFFSET(0x7CA3E0)
#define DCFKNANFOHI_DIGJIJOJDKD_OFFSET UNITYSDK_OFFSET(0x7CA520)
#define DCFKNANFOHI_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7CA350)
#define DCFKNANFOHI_LNDHIHKPBKD_OFFSET UNITYSDK_OFFSET(0x7CA3D0)
#define DCFKNANFOHI_MHGBEBDEGOL_OFFSET UNITYSDK_OFFSET(0x7CA510)
#define DCFKNANFOHI_MLBMDIKLNDE_OFFSET UNITYSDK_OFFSET(0x7CA460)
#define DCFKNANFOHI_NFJIDKBNIKP_OFFSET UNITYSDK_OFFSET(0x7CA500)
#define DCFKNANFOHI_ODEEJCPBCMM_OFFSET UNITYSDK_OFFSET(0x7CA470)
#define DCFKNANFOHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7CA340)

inline static constexpr unsigned int DCFKNANFOHI_TypeDefinitionIndex = 68003;

struct alignas(8) DCFKNANFOHI
{
	::Il2CppArray<::LOLNPGEMPBM>* LGHAHHMJPHI; // 0x10

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFKNANFOHI_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFKNANFOHI_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::Boolean LNDHIHKPBKD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFKNANFOHI_LNDHIHKPBKD_OFFSET))(this);
	}

	::System::Void BKOLHKHILLK(::System::Int32 EOGLMAEPALE, ::LOLNPGEMPBM IGAAKDOIPNN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::LOLNPGEMPBM))((::PBYTE)hIl2Cpp + DCFKNANFOHI_BKOLHKHILLK_OFFSET))(this, EOGLMAEPALE, IGAAKDOIPNN);
	}

	::System::Boolean MLBMDIKLNDE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFKNANFOHI_MLBMDIKLNDE_OFFSET))(this);
	}

	::System::Void ODEEJCPBCMM(::System::Int32 BFBMHJJHCIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DCFKNANFOHI_ODEEJCPBCMM_OFFSET))(this, BFBMHJJHCIJ);
	}

	::System::Boolean NFJIDKBNIKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFKNANFOHI_NFJIDKBNIKP_OFFSET))(this);
	}

	::System::Boolean MHGBEBDEGOL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFKNANFOHI_MHGBEBDEGOL_OFFSET))(this);
	}

	::System::Boolean DIGJIJOJDKD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCFKNANFOHI_DIGJIJOJDKD_OFFSET))(this);
	}
};
