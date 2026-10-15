#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"

#define GPGOJLCDIHD_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x3C27830)

inline static constexpr unsigned int GPGOJLCDIHD_TypeDefinitionIndex = 41426;

	struct alignas(4) GPGOJLCDIHD
	{
		::RPG::Client::DesignDataShortNameHash JKBOFDEJEEP; // 0x10
		::System::Int64 OGPDIJFMIHM; // 0x18
		::System::Int64 JFAGECNFHJL; // 0x20
		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPGOJLCDIHD_KKKIONIDKFA_OFFSET))(this);
		}

	};
