#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define IGKFNIEJGLM_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x164105B0)
#define IGKFNIEJGLM_LDPGMGLCCPM_OFFSET UNITYSDK_OFFSET(0x2E81610)

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
