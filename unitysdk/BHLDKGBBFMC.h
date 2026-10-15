#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNHKFCHOEHK.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListUnmanaged_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define BHLDKGBBFMC_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D804290)
#define BHLDKGBBFMC_BEAAJABAKMK_OFFSET UNITYSDK_OFFSET(0x3C40180)
#define BHLDKGBBFMC_BEDEGFALJPJ_OFFSET UNITYSDK_OFFSET(0x3C40110)
#define BHLDKGBBFMC_BFCKHJADFEB_OFFSET UNITYSDK_OFFSET(0x3C40010)
#define BHLDKGBBFMC_BKDBAMHOPCF_OFFSET UNITYSDK_OFFSET(0x3C40030)
#define BHLDKGBBFMC_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F86B50)
#define BHLDKGBBFMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2D5A0)
#define BHLDKGBBFMC_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D804160)
#define BHLDKGBBFMC_EKNPAJOMOIP_OFFSET UNITYSDK_OFFSET(0x3C400F0)
#define BHLDKGBBFMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C3FFA0)
#define BHLDKGBBFMC_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D804050)
#define BHLDKGBBFMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1140)
#define BHLDKGBBFMC_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB0F40)
#define BHLDKGBBFMC_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define BHLDKGBBFMC_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define BHLDKGBBFMC_HBHOMEOFMMP_OFFSET UNITYSDK_OFFSET(0x3C40080)
#define BHLDKGBBFMC_IAOHOMHPBJD_OFFSET UNITYSDK_OFFSET(0x3C400A0)
#define BHLDKGBBFMC_INIT_OFFSET UNITYSDK_OFFSET(0x14160)
#define BHLDKGBBFMC_KHPAHCOCAJP_OFFSET UNITYSDK_OFFSET(0x3C40160)
#define BHLDKGBBFMC_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1D804340)
#define BHLDKGBBFMC_ODEGFCGBPFI_OFFSET UNITYSDK_OFFSET(0x3C3FFB0)
#define BHLDKGBBFMC_PMKDJLBOKNJ_OFFSET UNITYSDK_OFFSET(0x3C3FFC0)

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
