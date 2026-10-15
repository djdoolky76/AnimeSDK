#pragma once
#include "unitysdk/unitysdk.h"

#define NJHKONOLLPK_FAKEKMHJIBI_OFFSET UNITYSDK_OFFSET(0x216B0)
#define NJHKONOLLPK_IBLFENNIHDN_OFFSET UNITYSDK_OFFSET(0x21690)

inline static constexpr unsigned int NJHKONOLLPK_TypeDefinitionIndex = 57167;

	struct alignas(4) NJHKONOLLPK
	{
		::System::Single DHPDILNLIPC; // 0x10
		::System::Single APMCPIPIJOI; // 0x14
		::System::Boolean IBLFENNIHDN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NJHKONOLLPK_IBLFENNIHDN_OFFSET))(this);
		}

		::System::Void FAKEKMHJIBI(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NJHKONOLLPK_FAKEKMHJIBI_OFFSET))(this, a1);
		}

	};
