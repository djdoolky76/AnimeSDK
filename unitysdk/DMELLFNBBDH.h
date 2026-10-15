#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/KMMGJIFCBHL.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define DMELLFNBBDH_AFDBLMGBHDJ_OFFSET UNITYSDK_OFFSET(0x3C37380)
#define DMELLFNBBDH_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CD14DC0)
#define DMELLFNBBDH_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F874F0)
#define DMELLFNBBDH_DINLJKNJEHA_OFFSET UNITYSDK_OFFSET(0x3C373F0)
#define DMELLFNBBDH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define DMELLFNBBDH_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CD14B60)
#define DMELLFNBBDH_ENEINAFABFL_OFFSET UNITYSDK_OFFSET(0x3C37410)
#define DMELLFNBBDH_EPEFNNDEPLH_OFFSET UNITYSDK_OFFSET(0x3C373A0)
#define DMELLFNBBDH_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C37370)
#define DMELLFNBBDH_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CD14A70)
#define DMELLFNBBDH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1A20)
#define DMELLFNBBDH_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define DMELLFNBBDH_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define DMELLFNBBDH_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define DMELLFNBBDH_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define DMELLFNBBDH_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CD14E70)

inline static constexpr unsigned int DMELLFNBBDH_TypeDefinitionIndex = 10659;

	struct alignas(8) DMELLFNBBDH
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + DMELLFNBBDH_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DMELLFNBBDH_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMELLFNBBDH_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMELLFNBBDH_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMELLFNBBDH_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::DMELLFNBBDH a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::DMELLFNBBDH, ::System::Object*))((::PBYTE)hIl2Cpp + DMELLFNBBDH_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::DMELLFNBBDH a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::DMELLFNBBDH, ::System::Object*))((::PBYTE)hIl2Cpp + DMELLFNBBDH_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::DMELLFNBBDH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMELLFNBBDH))((::PBYTE)hIl2Cpp + DMELLFNBBDH_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMELLFNBBDH_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMELLFNBBDH_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::DMELLFNBBDH a1)
		{
			return ((::System::Boolean(*)(::DMELLFNBBDH))((::PBYTE)hIl2Cpp + DMELLFNBBDH_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::DMELLFNBBDH a1)
		{
			return ((::System::Boolean(*)(::DMELLFNBBDH))((::PBYTE)hIl2Cpp + DMELLFNBBDH_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::JPCONPIKIEK AFDBLMGBHDJ()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + DMELLFNBBDH_AFDBLMGBHDJ_OFFSET))(this);
		}

		::System::Void EPEFNNDEPLH(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + DMELLFNBBDH_EPEFNNDEPLH_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::KMMGJIFCBHL> DINLJKNJEHA()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::KMMGJIFCBHL>(*)(::PVOID))((::PBYTE)hIl2Cpp + DMELLFNBBDH_DINLJKNJEHA_OFFSET))(this);
		}

		::System::Void ENEINAFABFL(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::KMMGJIFCBHL> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::KMMGJIFCBHL>))((::PBYTE)hIl2Cpp + DMELLFNBBDH_ENEINAFABFL_OFFSET))(this, a1);
		}

	};
