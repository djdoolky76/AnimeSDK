#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define GIPBNHHHBKI_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CE524A0)
#define GIPBNHHHBKI_DDGMNGKPLOO_OFFSET UNITYSDK_OFFSET(0x3C39020)
#define GIPBNHHHBKI_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define GIPBNHHHBKI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define GIPBNHHHBKI_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CE52240)
#define GIPBNHHHBKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C39000)
#define GIPBNHHHBKI_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CE52150)
#define GIPBNHHHBKI_FHCJOPBFLLD_OFFSET UNITYSDK_OFFSET(0x3C39070)
#define GIPBNHHHBKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define GIPBNHHHBKI_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define GIPBNHHHBKI_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define GIPBNHHHBKI_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define GIPBNHHHBKI_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define GIPBNHHHBKI_MEOFDEPLBKI_OFFSET UNITYSDK_OFFSET(0x3C39010)
#define GIPBNHHHBKI_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CE52550)
#define GIPBNHHHBKI_OKONJPGMIFN_OFFSET UNITYSDK_OFFSET(0x3C39090)

	struct alignas(8) GIPBNHHHBKI
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::GIPBNHHHBKI a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GIPBNHHHBKI, ::System::Object*))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::GIPBNHHHBKI a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GIPBNHHHBKI, ::System::Object*))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::GIPBNHHHBKI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIPBNHHHBKI))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::GIPBNHHHBKI a1)
		{
			return ((::System::Boolean(*)(::GIPBNHHHBKI))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::GIPBNHHHBKI a1)
		{
			return ((::System::Boolean(*)(::GIPBNHHHBKI))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::Single MEOFDEPLBKI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_MEOFDEPLBKI_OFFSET))(this);
		}

		::System::Void DDGMNGKPLOO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_DDGMNGKPLOO_OFFSET))(this, a1);
		}

		::RPG::MVector3 FHCJOPBFLLD()
		{
			return ((::RPG::MVector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_FHCJOPBFLLD_OFFSET))(this);
		}

		::System::Void OKONJPGMIFN(::RPG::MVector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + GIPBNHHHBKI_OKONJPGMIFN_OFFSET))(this, a1);
		}

	};
