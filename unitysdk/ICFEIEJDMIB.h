#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DGEPOBDMLDJ.h"
namespace System { class Delegate; }
namespace System { class Object; }

#define ICFEIEJDMIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C49FD0)
#define ICFEIEJDMIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C49F90)
#define ICFEIEJDMIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C4A050)
#define ICFEIEJDMIB_JJNFOPNOPBF_OFFSET UNITYSDK_OFFSET(0x1DD628D0)
#define ICFEIEJDMIB_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x3C49F80)
#define ICFEIEJDMIB_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x3C49F70)
#define ICFEIEJDMIB_MBABPIHGAJN_OFFSET UNITYSDK_OFFSET(0x3C49F10)

inline static constexpr unsigned int ICFEIEJDMIB_TypeDefinitionIndex = 6442;

	struct alignas(8) ICFEIEJDMIB
	{
		::DGEPOBDMLDJ CNAEHKPLENB; // 0x10
		::DGEPOBDMLDJ FBLHLHCGMKO; // 0x30
		::DGEPOBDMLDJ GNEIJHBGCHG; // 0x50
		::DGEPOBDMLDJ JNKMJKBDGPL; // 0x70
		::System::Delegate* LENAOOGGHDD; // 0x90
		::System::Void MBABPIHGAJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICFEIEJDMIB_MBABPIHGAJN_OFFSET))(this);
		}

		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICFEIEJDMIB_KKKIONIDKFA_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICFEIEJDMIB_KHGIKBFDLFB_OFFSET))(this);
		}

		static ::System::Void JJNFOPNOPBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + ICFEIEJDMIB_JJNFOPNOPBF_OFFSET))(a1);
		}

		/*
		::System::Boolean Equals(::ICFEIEJDMIB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICFEIEJDMIB))((::PBYTE)hIl2Cpp + ICFEIEJDMIB_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICFEIEJDMIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICFEIEJDMIB_GETHASHCODE_OFFSET))(this);
		}

	};
