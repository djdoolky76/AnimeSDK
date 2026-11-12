#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define BJGBNNLODKM_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1E9C2090)
#define BJGBNNLODKM_BPOINCJMGPC_OFFSET UNITYSDK_OFFSET(0x3E8E3A0)
#define BJGBNNLODKM_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x31619E0)
#define BJGBNNLODKM_DIEJFMEJJDD_OFFSET UNITYSDK_OFFSET(0x3E8E380)
#define BJGBNNLODKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3E7C580)
#define BJGBNNLODKM_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E9C1F60)
#define BJGBNNLODKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E8E370)
#define BJGBNNLODKM_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E9C1E50)
#define BJGBNNLODKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x318C7A0)
#define BJGBNNLODKM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x318C5A0)
#define BJGBNNLODKM_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define BJGBNNLODKM_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define BJGBNNLODKM_INIT_OFFSET UNITYSDK_OFFSET(0x18D10)
#define BJGBNNLODKM_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1E9C2140)

inline static constexpr unsigned int BJGBNNLODKM_TypeDefinitionIndex = 10689;

	struct alignas(8) BJGBNNLODKM
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + BJGBNNLODKM_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGBNNLODKM_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGBNNLODKM_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGBNNLODKM_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGBNNLODKM_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::BJGBNNLODKM a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::BJGBNNLODKM, ::System::Object*))((::PBYTE)hIl2Cpp + BJGBNNLODKM_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::BJGBNNLODKM a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::BJGBNNLODKM, ::System::Object*))((::PBYTE)hIl2Cpp + BJGBNNLODKM_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::BJGBNNLODKM a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJGBNNLODKM))((::PBYTE)hIl2Cpp + BJGBNNLODKM_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJGBNNLODKM_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGBNNLODKM_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::BJGBNNLODKM a1)
		{
			return ((::System::Boolean(*)(::BJGBNNLODKM))((::PBYTE)hIl2Cpp + BJGBNNLODKM_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::BJGBNNLODKM a1)
		{
			return ((::System::Boolean(*)(::BJGBNNLODKM))((::PBYTE)hIl2Cpp + BJGBNNLODKM_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JPCONPIKIEK> DIEJFMEJJDD()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JPCONPIKIEK>(*)(::PVOID))((::PBYTE)hIl2Cpp + BJGBNNLODKM_DIEJFMEJJDD_OFFSET))(this);
		}

		::System::Void BPOINCJMGPC(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JPCONPIKIEK> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JPCONPIKIEK>))((::PBYTE)hIl2Cpp + BJGBNNLODKM_BPOINCJMGPC_OFFSET))(this, a1);
		}

	};
