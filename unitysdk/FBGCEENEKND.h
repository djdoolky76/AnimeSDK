#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBEFEAJGFMA.h"

#define FBGCEENEKND_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1BA4A2D0)
#define FBGCEENEKND_MEDLNGKACMG_OFFSET UNITYSDK_OFFSET(0x3E93AD0)

inline static constexpr unsigned int FBGCEENEKND_TypeDefinitionIndex = 71800;

	struct alignas(4) FBGCEENEKND
	{
		::PBEFEAJGFMA AMOEKPDDAHB; // 0x10
		::PBEFEAJGFMA MCAKDDOBKCD; // 0x18
		/*
		static ::FBGCEENEKND BPLPBPMEODA(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::FBGCEENEKND(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FBGCEENEKND_BPLPBPMEODA_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean MEDLNGKACMG(::System::Int32 a1, ::System::Int32 a2, ::FBGCEENEKND a3, ::System::Boolean a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::FBGCEENEKND, ::System::Boolean))((::PBYTE)hIl2Cpp + FBGCEENEKND_MEDLNGKACMG_OFFSET))(this, a1, a2, a3, a4);
		}
		*/

	};
