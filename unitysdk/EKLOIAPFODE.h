#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJEKJAJDBFF.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EKLOIAPFODE_CTOR_OFFSET UNITYSDK_OFFSET(0x2E743F0)
#define EKLOIAPFODE_IINFBOIBNIK_OFFSET UNITYSDK_OFFSET(0x2E744C0)
#define EKLOIAPFODE_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x2E744D0)
#define EKLOIAPFODE_LDPGMGLCCPM_OFFSET UNITYSDK_OFFSET(0x2E744B0)

inline static constexpr unsigned int EKLOIAPFODE_TypeDefinitionIndex = 73561;

	struct alignas(8) EKLOIAPFODE
	{
		::System::Collections::Generic::List_1<::GJEKJAJDBFF>* NOECOCLKGBB; // 0x10
		::System::Collections::Generic::List_1<::GJEKJAJDBFF>* AEKBCKGHGFI; // 0x18
		::System::Single AIKILJHEOIP; // 0x20
		::System::Boolean KJBADKFEGKK; // 0x24
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EKLOIAPFODE_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean LDPGMGLCCPM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLOIAPFODE_LDPGMGLCCPM_OFFSET))(this);
		}

		::System::Void IINFBOIBNIK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EKLOIAPFODE_IINFBOIBNIK_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKLOIAPFODE_KHGIKBFDLFB_OFFSET))(this);
		}

	};
