#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define INBCAKDBHHE_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CF25640)
#define INBCAKDBHHE_BNMOEGCAGBM_OFFSET UNITYSDK_OFFSET(0x3C3AA60)
#define INBCAKDBHHE_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define INBCAKDBHHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define INBCAKDBHHE_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CF253E0)
#define INBCAKDBHHE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C3AA50)
#define INBCAKDBHHE_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CF252F0)
#define INBCAKDBHHE_FHGABFPDMPP_OFFSET UNITYSDK_OFFSET(0x3C3AA80)
#define INBCAKDBHHE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define INBCAKDBHHE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define INBCAKDBHHE_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define INBCAKDBHHE_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define INBCAKDBHHE_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define INBCAKDBHHE_JDIIAPGMDFF_OFFSET UNITYSDK_OFFSET(0x3C3AB30)
#define INBCAKDBHHE_LFKFHNNOLLN_OFFSET UNITYSDK_OFFSET(0x3C3AAE0)
#define INBCAKDBHHE_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x3C3AAD0)
#define INBCAKDBHHE_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CF256F0)
#define INBCAKDBHHE_PGMFGIBAMJN_OFFSET UNITYSDK_OFFSET(0x3C3AB50)

	struct alignas(8) INBCAKDBHHE
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + INBCAKDBHHE_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INBCAKDBHHE_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBCAKDBHHE_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + INBCAKDBHHE_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INBCAKDBHHE_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::INBCAKDBHHE a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::INBCAKDBHHE, ::System::Object*))((::PBYTE)hIl2Cpp + INBCAKDBHHE_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::INBCAKDBHHE a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::INBCAKDBHHE, ::System::Object*))((::PBYTE)hIl2Cpp + INBCAKDBHHE_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::INBCAKDBHHE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INBCAKDBHHE))((::PBYTE)hIl2Cpp + INBCAKDBHHE_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INBCAKDBHHE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBCAKDBHHE_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::INBCAKDBHHE a1)
		{
			return ((::System::Boolean(*)(::INBCAKDBHHE))((::PBYTE)hIl2Cpp + INBCAKDBHHE_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::INBCAKDBHHE a1)
		{
			return ((::System::Boolean(*)(::INBCAKDBHHE))((::PBYTE)hIl2Cpp + INBCAKDBHHE_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JPCONPIKIEK> BNMOEGCAGBM()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JPCONPIKIEK>(*)(::PVOID))((::PBYTE)hIl2Cpp + INBCAKDBHHE_BNMOEGCAGBM_OFFSET))(this);
		}

		::System::Void FHGABFPDMPP(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JPCONPIKIEK> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JPCONPIKIEK>))((::PBYTE)hIl2Cpp + INBCAKDBHHE_FHGABFPDMPP_OFFSET))(this, a1);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + INBCAKDBHHE_MJGKNFEILLI_OFFSET))(this);
		}

		::System::Void LFKFHNNOLLN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + INBCAKDBHHE_LFKFHNNOLLN_OFFSET))(this, a1);
		}

		::JPCONPIKIEK JDIIAPGMDFF()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + INBCAKDBHHE_JDIIAPGMDFF_OFFSET))(this);
		}

		::System::Void PGMFGIBAMJN(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + INBCAKDBHHE_PGMFGIBAMJN_OFFSET))(this, a1);
		}

	};
