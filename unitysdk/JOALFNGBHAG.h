#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEHMCJDBGFP.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolListPoolMember_1.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define JOALFNGBHAG_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D0287E0)
#define JOALFNGBHAG_CLANJJOJBHL_OFFSET UNITYSDK_OFFSET(0x3C3B560)
#define JOALFNGBHAG_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F874F0)
#define JOALFNGBHAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define JOALFNGBHAG_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D0286B0)
#define JOALFNGBHAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C3B540)
#define JOALFNGBHAG_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D0285A0)
#define JOALFNGBHAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1A20)
#define JOALFNGBHAG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define JOALFNGBHAG_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define JOALFNGBHAG_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define JOALFNGBHAG_GGJJFJKDBPE_OFFSET UNITYSDK_OFFSET(0x3C3B550)
#define JOALFNGBHAG_HACJDECAKCJ_OFFSET UNITYSDK_OFFSET(0x3C3B5D0)
#define JOALFNGBHAG_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define JOALFNGBHAG_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1D028890)
#define JOALFNGBHAG_PLFOPEHNGMG_OFFSET UNITYSDK_OFFSET(0x3C3B5B0)

inline static constexpr unsigned int JOALFNGBHAG_TypeDefinitionIndex = 10650;

	struct alignas(8) JOALFNGBHAG
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + JOALFNGBHAG_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOALFNGBHAG_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOALFNGBHAG_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOALFNGBHAG_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOALFNGBHAG_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::JOALFNGBHAG a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::JOALFNGBHAG, ::System::Object*))((::PBYTE)hIl2Cpp + JOALFNGBHAG_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::JOALFNGBHAG a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::JOALFNGBHAG, ::System::Object*))((::PBYTE)hIl2Cpp + JOALFNGBHAG_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::JOALFNGBHAG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOALFNGBHAG))((::PBYTE)hIl2Cpp + JOALFNGBHAG_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOALFNGBHAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOALFNGBHAG_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::JOALFNGBHAG a1)
		{
			return ((::System::Boolean(*)(::JOALFNGBHAG))((::PBYTE)hIl2Cpp + JOALFNGBHAG_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::JOALFNGBHAG a1)
		{
			return ((::System::Boolean(*)(::JOALFNGBHAG))((::PBYTE)hIl2Cpp + JOALFNGBHAG_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::Int32 GGJJFJKDBPE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOALFNGBHAG_GGJJFJKDBPE_OFFSET))(this);
		}

		::System::Void CLANJJOJBHL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JOALFNGBHAG_CLANJJOJBHL_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolListPoolMember_1<::GEHMCJDBGFP> PLFOPEHNGMG()
		{
			return ((::RPG::GameCore::ConfigDataPoolListPoolMember_1<::GEHMCJDBGFP>(*)(::PVOID))((::PBYTE)hIl2Cpp + JOALFNGBHAG_PLFOPEHNGMG_OFFSET))(this);
		}

		::System::Void HACJDECAKCJ(::RPG::GameCore::ConfigDataPoolListPoolMember_1<::GEHMCJDBGFP> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolListPoolMember_1<::GEHMCJDBGFP>))((::PBYTE)hIl2Cpp + JOALFNGBHAG_HACJDECAKCJ_OFFSET))(this, a1);
		}

	};
