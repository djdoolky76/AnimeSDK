#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define CIGLFKLHBGD_BDJPPIMOJBH_OFFSET UNITYSDK_OFFSET(0x3C27800)
#define CIGLFKLHBGD_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3C27600)
#define CIGLFKLHBGD_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1C454D10)
#define CIGLFKLHBGD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C27760)
#define CIGLFKLHBGD_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C27690)
#define CIGLFKLHBGD_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1C454A30)
#define CIGLFKLHBGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C27790)
#define CIGLFKLHBGD_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0x3C275F0)
#define CIGLFKLHBGD_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x3C275E0)
#define CIGLFKLHBGD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C277F0)

	struct alignas(4) CIGLFKLHBGD
	{
		::System::UInt32 BDCFLFPLDAN; // 0x10
		::System::UInt32 IDGNLJPNCFD; // 0x14
		::System::UInt32 BNGDECGNLJF; // 0x18
		::System::UInt32 PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CIGLFKLHBGD_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CIGLFKLHBGD_NDFCJNAMFJG_OFFSET))(this, a1, a2);
		}

		/*
		::System::Int32 CompareTo(::CIGLFKLHBGD a1)
		{
			return ((::System::Int32(*)(::PVOID, ::CIGLFKLHBGD))((::PBYTE)hIl2Cpp + CIGLFKLHBGD_COMPARETO_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIGLFKLHBGD_EQUALS_OFFSET))(this, a1);
		}

		/*
		::System::Boolean Equals_1(::CIGLFKLHBGD a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CIGLFKLHBGD))((::PBYTE)hIl2Cpp + CIGLFKLHBGD_EQUALS_1_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGLFKLHBGD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIGLFKLHBGD_TOSTRING_OFFSET))(this);
		}

		::System::String* BDJPPIMOJBH(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CIGLFKLHBGD_BDJPPIMOJBH_OFFSET))(this, a1);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::CIGLFKLHBGD a1, ::CIGLFKLHBGD a2)
		{
			return ((::System::Boolean(*)(::CIGLFKLHBGD, ::CIGLFKLHBGD))((::PBYTE)hIl2Cpp + CIGLFKLHBGD_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::CIGLFKLHBGD a1, ::CIGLFKLHBGD a2)
		{
			return ((::System::Boolean(*)(::CIGLFKLHBGD, ::CIGLFKLHBGD))((::PBYTE)hIl2Cpp + CIGLFKLHBGD_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

	};
