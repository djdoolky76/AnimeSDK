#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMAAGEECMIL.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace System { class Object; }

#define GJLPOBKPHCO_AIMKNJIJNLJ_OFFSET UNITYSDK_OFFSET(0x3C39190)
#define GJLPOBKPHCO_AMHJBILAPLI_OFFSET UNITYSDK_OFFSET(0x3C39110)
#define GJLPOBKPHCO_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CE56EB0)
#define GJLPOBKPHCO_BOOCHFEBKCF_OFFSET UNITYSDK_OFFSET(0x3C39200)
#define GJLPOBKPHCO_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define GJLPOBKPHCO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define GJLPOBKPHCO_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CE56D80)
#define GJLPOBKPHCO_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C39100)
#define GJLPOBKPHCO_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CE56C70)
#define GJLPOBKPHCO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define GJLPOBKPHCO_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define GJLPOBKPHCO_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define GJLPOBKPHCO_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define GJLPOBKPHCO_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define GJLPOBKPHCO_JAFCKHBLOMO_OFFSET UNITYSDK_OFFSET(0x3C39130)
#define GJLPOBKPHCO_LDBDOGIDIFF_OFFSET UNITYSDK_OFFSET(0x3C391E0)
#define GJLPOBKPHCO_LECJLFNPCPI_OFFSET UNITYSDK_OFFSET(0x3C39180)
#define GJLPOBKPHCO_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CE56F60)

inline static constexpr unsigned int GJLPOBKPHCO_TypeDefinitionIndex = 10652;

	struct alignas(8) GJLPOBKPHCO
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::GJLPOBKPHCO a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GJLPOBKPHCO, ::System::Object*))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::GJLPOBKPHCO a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GJLPOBKPHCO, ::System::Object*))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::GJLPOBKPHCO a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJLPOBKPHCO))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::GJLPOBKPHCO a1)
		{
			return ((::System::Boolean(*)(::GJLPOBKPHCO))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::GJLPOBKPHCO a1)
		{
			return ((::System::Boolean(*)(::GJLPOBKPHCO))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::DMAAGEECMIL> AMHJBILAPLI()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::DMAAGEECMIL>(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_AMHJBILAPLI_OFFSET))(this);
		}

		::System::Void JAFCKHBLOMO(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::DMAAGEECMIL> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::DMAAGEECMIL>))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_JAFCKHBLOMO_OFFSET))(this, a1);
		}

		::RPG::GameCore::HoyoTagContainer* LECJLFNPCPI()
		{
			return ((::RPG::GameCore::HoyoTagContainer*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_LECJLFNPCPI_OFFSET))(this);
		}

		::System::Void AIMKNJIJNLJ(::RPG::GameCore::HoyoTagContainer* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_AIMKNJIJNLJ_OFFSET))(this, a1);
		}

		::JPCONPIKIEK LDBDOGIDIFF()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_LDBDOGIDIFF_OFFSET))(this);
		}

		::System::Void BOOCHFEBKCF(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + GJLPOBKPHCO_BOOCHFEBKCF_OFFSET))(this, a1);
		}

	};
