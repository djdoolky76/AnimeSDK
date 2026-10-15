#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryKeyStringValuePoolMember_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define OEEAAJCBNIJ_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D25C760)
#define OEEAAJCBNIJ_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define OEEAAJCBNIJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define OEEAAJCBNIJ_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D25C500)
#define OEEAAJCBNIJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C3D700)
#define OEEAAJCBNIJ_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D25C410)
#define OEEAAJCBNIJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define OEEAAJCBNIJ_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define OEEAAJCBNIJ_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define OEEAAJCBNIJ_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define OEEAAJCBNIJ_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define OEEAAJCBNIJ_MDEIBLGJIFM_OFFSET UNITYSDK_OFFSET(0x3C3D710)
#define OEEAAJCBNIJ_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1D25C810)
#define OEEAAJCBNIJ_NKAOCFDEMFF_OFFSET UNITYSDK_OFFSET(0x3C3D730)

	struct alignas(8) OEEAAJCBNIJ
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::OEEAAJCBNIJ a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::OEEAAJCBNIJ, ::System::Object*))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::OEEAAJCBNIJ a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::OEEAAJCBNIJ, ::System::Object*))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::OEEAAJCBNIJ a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEEAAJCBNIJ))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::OEEAAJCBNIJ a1)
		{
			return ((::System::Boolean(*)(::OEEAAJCBNIJ))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::OEEAAJCBNIJ a1)
		{
			return ((::System::Boolean(*)(::OEEAAJCBNIJ))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::JPCONPIKIEK> MDEIBLGJIFM()
		{
			return ((::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::JPCONPIKIEK>(*)(::PVOID))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_MDEIBLGJIFM_OFFSET))(this);
		}

		::System::Void NKAOCFDEMFF(::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::JPCONPIKIEK> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryKeyStringValuePoolMember_1<::JPCONPIKIEK>))((::PBYTE)hIl2Cpp + OEEAAJCBNIJ_NKAOCFDEMFF_OFFSET))(this, a1);
		}

	};
