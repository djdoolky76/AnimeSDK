#pragma once
#include "unitysdk/unitysdk.h"

#define EAKGBLEMBLN_CGJJGIEBLNC_GET_VAL_OFFSET UNITYSDK_OFFSET(0xE620)
#define EAKGBLEMBLN_CGJJGIEBLNC_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x202EEB0)
#define EAKGBLEMBLN_CGJJGIEBLNC_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x202EE50)
#define EAKGBLEMBLN_CGJJGIEBLNC_SET_VAL_OFFSET UNITYSDK_OFFSET(0xAF40)

	struct alignas(4) EAKGBLEMBLN_CGJJGIEBLNC
	{
		::System::Int32 _Val_k__BackingField; // 0x10
		::System::Int32 get_Val()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_CGJJGIEBLNC_GET_VAL_OFFSET))(this);
		}

		::System::Void set_Val(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_CGJJGIEBLNC_SET_VAL_OFFSET))(this, a1);
		}

		::System::Boolean PAGKOAEOLKA(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_CGJJGIEBLNC_PAGKOAEOLKA_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAKGBLEMBLN_CGJJGIEBLNC_KHGIKBFDLFB_OFFSET))(this);
		}

	};
