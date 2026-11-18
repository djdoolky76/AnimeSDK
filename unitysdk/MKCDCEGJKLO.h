#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define MKCDCEGJKLO_ELKMIDDCLCD_OFFSET UNITYSDK_OFFSET(0x6C9C80)
#define MKCDCEGJKLO_HLLMEGECMAD_OFFSET UNITYSDK_OFFSET(0x6C9BD0)
#define MKCDCEGJKLO_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x6C9C70)
#define MKCDCEGJKLO_NAKNCOBIMCI_OFFSET UNITYSDK_OFFSET(0x6C9E90)
#define MKCDCEGJKLO_NGFKBKCFPLK_OFFSET UNITYSDK_OFFSET(0x6C9DB0)
#define MKCDCEGJKLO_NHNCBBJOHJF_OFFSET UNITYSDK_OFFSET(0x6C9D10)
#define MKCDCEGJKLO_OAJEIDFGCII_OFFSET UNITYSDK_OFFSET(0x3D5A00)
#define MKCDCEGJKLO_PEOEBEBFIJO_OFFSET UNITYSDK_OFFSET(0x282350)
#define MKCDCEGJKLO__CTOR_OFFSET UNITYSDK_OFFSET(0x358B00)

inline static constexpr unsigned int MKCDCEGJKLO_TypeDefinitionIndex = 58451;

struct alignas(4) MKCDCEGJKLO
{
	::System::UInt64 HHGILNNMNAK; // 0x10

	::System::Void _ctor(::System::UInt64 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MKCDCEGJKLO__CTOR_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt64 PEOEBEBFIJO()
	{
		return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDCEGJKLO_PEOEBEBFIJO_OFFSET))(this);
	}

	::System::Int32 HLLMEGECMAD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDCEGJKLO_HLLMEGECMAD_OFFSET))(this);
	}

	/*
	::MKCDCEGJKLO JJEJHGOJOII()
	{
		return ((::MKCDCEGJKLO(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDCEGJKLO_JJEJHGOJOII_OFFSET))(this);
	}
	*/

	::System::Int32 ELKMIDDCLCD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDCEGJKLO_ELKMIDDCLCD_OFFSET))(this);
	}

	::System::Int32 NHNCBBJOHJF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDCEGJKLO_NHNCBBJOHJF_OFFSET))(this);
	}

	::System::Int32 NGFKBKCFPLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDCEGJKLO_NGFKBKCFPLK_OFFSET))(this);
	}

	::System::Boolean OAJEIDFGCII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDCEGJKLO_OAJEIDFGCII_OFFSET))(this);
	}

	::Il2CppArray<::System::Object*>* NAKNCOBIMCI()
	{
		return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKCDCEGJKLO_NAKNCOBIMCI_OFFSET))(this);
	}
};
