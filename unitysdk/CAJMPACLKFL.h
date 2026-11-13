#pragma once
#include "unitysdk/unitysdk.h"
class HDIHFIHMEIB;
namespace RPG::Client { class NetPacket; }

#define CAJMPACLKFL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x2032ABC0)
#define CAJMPACLKFL_CCGNIJOOPPM_OFFSET UNITYSDK_OFFSET(0x6C95B0)
#define CAJMPACLKFL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3F69520)

inline static constexpr unsigned int CAJMPACLKFL_TypeDefinitionIndex = 45004;

	struct alignas(8) CAJMPACLKFL
	{
		::HDIHFIHMEIB* KNBOOGCFLBK; // 0x10
		::RPG::Client::NetPacket* PINHJEFCIGM; // 0x18
		/*
		static ::CAJMPACLKFL BPLPBPMEODA(::HDIHFIHMEIB* a1)
		{
			return ((::CAJMPACLKFL(*)(::HDIHFIHMEIB*))((::PBYTE)hIl2Cpp + CAJMPACLKFL_BPLPBPMEODA_OFFSET))(a1);
		}
		*/

		::RPG::Client::NetPacket* CCGNIJOOPPM()
		{
			return ((::RPG::Client::NetPacket*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJMPACLKFL_CCGNIJOOPPM_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAJMPACLKFL_DISPOSE_OFFSET))(this);
		}

	};
