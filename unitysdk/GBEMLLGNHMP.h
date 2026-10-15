#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJLPOBKPHCO.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define GBEMLLGNHMP_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CE23A00)
#define GBEMLLGNHMP_CEKJGJIBAME_OFFSET UNITYSDK_OFFSET(0x3C388F0)
#define GBEMLLGNHMP_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define GBEMLLGNHMP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define GBEMLLGNHMP_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CE238D0)
#define GBEMLLGNHMP_EHJEIOFGMLL_OFFSET UNITYSDK_OFFSET(0x3C38950)
#define GBEMLLGNHMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C388E0)
#define GBEMLLGNHMP_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CE237C0)
#define GBEMLLGNHMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define GBEMLLGNHMP_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define GBEMLLGNHMP_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define GBEMLLGNHMP_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define GBEMLLGNHMP_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define GBEMLLGNHMP_KIEJNHOGJBK_OFFSET UNITYSDK_OFFSET(0x3C38900)
#define GBEMLLGNHMP_LEIMPPFCAIK_OFFSET UNITYSDK_OFFSET(0x3C38970)
#define GBEMLLGNHMP_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CE23AB0)

	struct alignas(8) GBEMLLGNHMP
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::GBEMLLGNHMP a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GBEMLLGNHMP, ::System::Object*))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::GBEMLLGNHMP a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GBEMLLGNHMP, ::System::Object*))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::GBEMLLGNHMP a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GBEMLLGNHMP))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::GBEMLLGNHMP a1)
		{
			return ((::System::Boolean(*)(::GBEMLLGNHMP))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::GBEMLLGNHMP a1)
		{
			return ((::System::Boolean(*)(::GBEMLLGNHMP))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::Int32 CEKJGJIBAME()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_CEKJGJIBAME_OFFSET))(this);
		}

		::System::Void KIEJNHOGJBK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_KIEJNHOGJBK_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::GJLPOBKPHCO> EHJEIOFGMLL()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::GJLPOBKPHCO>(*)(::PVOID))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_EHJEIOFGMLL_OFFSET))(this);
		}

		::System::Void LEIMPPFCAIK(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::GJLPOBKPHCO> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::GJLPOBKPHCO>))((::PBYTE)hIl2Cpp + GBEMLLGNHMP_LEIMPPFCAIK_OFFSET))(this, a1);
		}

	};
