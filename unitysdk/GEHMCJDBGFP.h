#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define GEHMCJDBGFP_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1CE08A80)
#define GEHMCJDBGFP_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F874F0)
#define GEHMCJDBGFP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define GEHMCJDBGFP_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1CE08950)
#define GEHMCJDBGFP_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C39110)
#define GEHMCJDBGFP_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1CE08840)
#define GEHMCJDBGFP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1A20)
#define GEHMCJDBGFP_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define GEHMCJDBGFP_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define GEHMCJDBGFP_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define GEHMCJDBGFP_HFICOCMODAB_OFFSET UNITYSDK_OFFSET(0x3C39120)
#define GEHMCJDBGFP_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define GEHMCJDBGFP_KPDMFKIIJMO_OFFSET UNITYSDK_OFFSET(0x3C39130)
#define GEHMCJDBGFP_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1CE08B30)

inline static constexpr unsigned int GEHMCJDBGFP_TypeDefinitionIndex = 10654;

	struct alignas(8) GEHMCJDBGFP
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::GEHMCJDBGFP a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GEHMCJDBGFP, ::System::Object*))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::GEHMCJDBGFP a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GEHMCJDBGFP, ::System::Object*))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::GEHMCJDBGFP a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEHMCJDBGFP))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::GEHMCJDBGFP a1)
		{
			return ((::System::Boolean(*)(::GEHMCJDBGFP))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::GEHMCJDBGFP a1)
		{
			return ((::System::Boolean(*)(::GEHMCJDBGFP))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::Int32 HFICOCMODAB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_HFICOCMODAB_OFFSET))(this);
		}

		::System::Void KPDMFKIIJMO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEHMCJDBGFP_KPDMFKIIJMO_OFFSET))(this, a1);
		}

	};
