#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOALFNGBHAG.h"
#include "unitysdk/JPCONPIKIEK.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define FDHAEHHIKDL_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CDAE7A0)
#define FDHAEHHIKDL_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F874F0)
#define FDHAEHHIKDL_DICPLJJBAGA_OFFSET UNITYSDK_OFFSET(0x3C38B70)
#define FDHAEHHIKDL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define FDHAEHHIKDL_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CDAE670)
#define FDHAEHHIKDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C38B40)
#define FDHAEHHIKDL_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CDAE560)
#define FDHAEHHIKDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1A20)
#define FDHAEHHIKDL_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define FDHAEHHIKDL_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define FDHAEHHIKDL_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define FDHAEHHIKDL_IECAOGFCAKM_OFFSET UNITYSDK_OFFSET(0x3C38BC0)
#define FDHAEHHIKDL_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define FDHAEHHIKDL_IPHFABFAFKF_OFFSET UNITYSDK_OFFSET(0x3C38BE0)
#define FDHAEHHIKDL_JNCNGPMMDAG_OFFSET UNITYSDK_OFFSET(0x3C38B50)
#define FDHAEHHIKDL_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CDAE850)

inline static constexpr unsigned int FDHAEHHIKDL_TypeDefinitionIndex = 10667;

	struct alignas(8) FDHAEHHIKDL
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::FDHAEHHIKDL a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::FDHAEHHIKDL, ::System::Object*))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::FDHAEHHIKDL a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::FDHAEHHIKDL, ::System::Object*))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::FDHAEHHIKDL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDHAEHHIKDL))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::FDHAEHHIKDL a1)
		{
			return ((::System::Boolean(*)(::FDHAEHHIKDL))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::FDHAEHHIKDL a1)
		{
			return ((::System::Boolean(*)(::FDHAEHHIKDL))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::JPCONPIKIEK JNCNGPMMDAG()
		{
			return ((::JPCONPIKIEK(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_JNCNGPMMDAG_OFFSET))(this);
		}

		::System::Void DICPLJJBAGA(::JPCONPIKIEK a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPCONPIKIEK))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_DICPLJJBAGA_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JOALFNGBHAG> IECAOGFCAKM()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JOALFNGBHAG>(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_IECAOGFCAKM_OFFSET))(this);
		}

		::System::Void IPHFABFAFKF(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JOALFNGBHAG> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::JOALFNGBHAG>))((::PBYTE)hIl2Cpp + FDHAEHHIKDL_IPHFABFAFKF_OFFSET))(this, a1);
		}

	};
