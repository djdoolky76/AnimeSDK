#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define BJGBNNLODKM_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1F19A3C0)
#define BJGBNNLODKM_BPOINCJMGPC_OFFSET UNITYSDK_OFFSET(0x3F469C0)
#define BJGBNNLODKM_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xCB40)
#define BJGBNNLODKM_DIEJFMEJJDD_OFFSET UNITYSDK_OFFSET(0x3F469A0)
#define BJGBNNLODKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define BJGBNNLODKM_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1F19A290)
#define BJGBNNLODKM_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F46990)
#define BJGBNNLODKM_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1F19A180)
#define BJGBNNLODKM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define BJGBNNLODKM_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define BJGBNNLODKM_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define BJGBNNLODKM_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define BJGBNNLODKM_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define BJGBNNLODKM_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1F19A470)

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
