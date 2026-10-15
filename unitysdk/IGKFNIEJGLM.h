#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define IGKFNIEJGLM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16403240)
#define IGKFNIEJGLM_LDPGMGLCCPM_OFFSET UNITYSDK_OFFSET(0x2E82930)

inline static constexpr unsigned int IGKFNIEJGLM_TypeDefinitionIndex = 73022;

	struct alignas(8) IGKFNIEJGLM
	{
		::System::Object* KMPLEILCHMI; // 0x10
		/*
		static ::IGKFNIEJGLM BPLPBPMEODA(::System::Object* a1)
		{
			return ((::IGKFNIEJGLM(*)(::System::Object*))((::PBYTE)hIl2Cpp + IGKFNIEJGLM_BPLPBPMEODA_OFFSET))(a1);
		}
		*/

		::System::Boolean LDPGMGLCCPM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IGKFNIEJGLM_LDPGMGLCCPM_OFFSET))(this);
		}

	};
