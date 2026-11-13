#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNHKFCHOEHK.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define BHLDKGBBFMC_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1F18FF20)
#define BHLDKGBBFMC_BEAAJABAKMK_OFFSET UNITYSDK_OFFSET(0x3F46920)
#define BHLDKGBBFMC_BEDEGFALJPJ_OFFSET UNITYSDK_OFFSET(0x3F468B0)
#define BHLDKGBBFMC_BFCKHJADFEB_OFFSET UNITYSDK_OFFSET(0x3F467B0)
#define BHLDKGBBFMC_BKDBAMHOPCF_OFFSET UNITYSDK_OFFSET(0x3F467D0)
#define BHLDKGBBFMC_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xCB40)
#define BHLDKGBBFMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define BHLDKGBBFMC_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1F18FDF0)
#define BHLDKGBBFMC_EKNPAJOMOIP_OFFSET UNITYSDK_OFFSET(0x3F46890)
#define BHLDKGBBFMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F46740)
#define BHLDKGBBFMC_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1F18FCE0)
#define BHLDKGBBFMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define BHLDKGBBFMC_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define BHLDKGBBFMC_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define BHLDKGBBFMC_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define BHLDKGBBFMC_HBHOMEOFMMP_OFFSET UNITYSDK_OFFSET(0x3F46820)
#define BHLDKGBBFMC_IAOHOMHPBJD_OFFSET UNITYSDK_OFFSET(0x3F46840)
#define BHLDKGBBFMC_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define BHLDKGBBFMC_KHPAHCOCAJP_OFFSET UNITYSDK_OFFSET(0x3F46900)
#define BHLDKGBBFMC_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1F18FFD0)
#define BHLDKGBBFMC_ODEGFCGBPFI_OFFSET UNITYSDK_OFFSET(0x3F46750)
#define BHLDKGBBFMC_PMKDJLBOKNJ_OFFSET UNITYSDK_OFFSET(0x3F46760)

inline static constexpr unsigned int BHLDKGBBFMC_TypeDefinitionIndex = 10721;

	struct alignas(8) BHLDKGBBFMC
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::BHLDKGBBFMC a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::BHLDKGBBFMC, ::System::Object*))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::BHLDKGBBFMC a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::BHLDKGBBFMC, ::System::Object*))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::BHLDKGBBFMC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BHLDKGBBFMC))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::BHLDKGBBFMC a1)
		{
			return ((::System::Boolean(*)(::BHLDKGBBFMC))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::BHLDKGBBFMC a1)
		{
			return ((::System::Boolean(*)(::BHLDKGBBFMC))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::UInt32 ODEGFCGBPFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_ODEGFCGBPFI_OFFSET))(this);
		}

		::System::Void PMKDJLBOKNJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_PMKDJLBOKNJ_OFFSET))(this, a1);
		}

		::JPCONPIKIEK BFCKHJADFEB()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_BFCKHJADFEB_OFFSET))(this);
		}

		::System::Void BKDBAMHOPCF(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_BKDBAMHOPCF_OFFSET))(this, a1);
		}

		::JPCONPIKIEK HBHOMEOFMMP()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_HBHOMEOFMMP_OFFSET))(this);
		}

		::System::Void IAOHOMHPBJD(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_IAOHOMHPBJD_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::CNHKFCHOEHK> EKNPAJOMOIP()
		{
			return ((::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::CNHKFCHOEHK>(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_EKNPAJOMOIP_OFFSET))(this);
		}

		::System::Void BEDEGFALJPJ(::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::CNHKFCHOEHK> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListUnmanaged_1<::CNHKFCHOEHK>))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_BEDEGFALJPJ_OFFSET))(this, a1);
		}

		::JPCONPIKIEK KHPAHCOCAJP()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_KHPAHCOCAJP_OFFSET))(this);
		}

		::System::Void BEAAJABAKMK(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + BHLDKGBBFMC_BEAAJABAKMK_OFFSET))(this, a1);
		}

	};
