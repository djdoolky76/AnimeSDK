#pragma once
#include "unitysdk/unitysdk.h"

#define EAKGBLEMBLN_FHPHLDFMKDJ_GET_VAL_OFFSET UNITYSDK_OFFSET(0x1D00)
#define EAKGBLEMBLN_FHPHLDFMKDJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x202EF70)
#define EAKGBLEMBLN_FHPHLDFMKDJ_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x202EF00)
#define EAKGBLEMBLN_FHPHLDFMKDJ_SET_VAL_OFFSET UNITYSDK_OFFSET(0x14EA0)

inline static constexpr unsigned int EAKGBLEMBLN_FHPHLDFMKDJ_TypeDefinitionIndex = 56912;

	struct alignas(4) EAKGBLEMBLN_FHPHLDFMKDJ
	{
		::System::Single _Val_k__BackingField; // 0x10
		::System::Single get_Val()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_FHPHLDFMKDJ_GET_VAL_OFFSET))(this);
		}

		::System::Void set_Val(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_FHPHLDFMKDJ_SET_VAL_OFFSET))(this, a1);
		}

		::System::Boolean PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_FHPHLDFMKDJ_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_FHPHLDFMKDJ_KHGIKBFDLFB_OFFSET))(this);
		}

	};
