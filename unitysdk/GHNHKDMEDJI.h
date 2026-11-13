#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define GHNHKDMEDJI_ALBGCMAEADH_OFFSET UNITYSDK_OFFSET(0x3F299C0)
#define GHNHKDMEDJI_AMKACBEJIPD_OFFSET UNITYSDK_OFFSET(0x3F299D0)
#define GHNHKDMEDJI_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1E63F490)
#define GHNHKDMEDJI_DFCCHECHFHM_OFFSET UNITYSDK_OFFSET(0x3F29A30)
#define GHNHKDMEDJI_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xCB40)
#define GHNHKDMEDJI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define GHNHKDMEDJI_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E63F230)
#define GHNHKDMEDJI_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F299B0)
#define GHNHKDMEDJI_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E63F140)
#define GHNHKDMEDJI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define GHNHKDMEDJI_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define GHNHKDMEDJI_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define GHNHKDMEDJI_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define GHNHKDMEDJI_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define GHNHKDMEDJI_KEKEJIFFKDC_OFFSET UNITYSDK_OFFSET(0x3F29A20)
#define GHNHKDMEDJI_LDHLGKKGJCJ_OFFSET UNITYSDK_OFFSET(0x3F29A80)
#define GHNHKDMEDJI_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1E63F540)
#define GHNHKDMEDJI_PPBLOBPAGKD_OFFSET UNITYSDK_OFFSET(0x3F29A90)

inline static constexpr unsigned int GHNHKDMEDJI_TypeDefinitionIndex = 10739;

	struct alignas(8) GHNHKDMEDJI
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::GHNHKDMEDJI a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GHNHKDMEDJI, ::System::Object*))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::GHNHKDMEDJI a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::GHNHKDMEDJI, ::System::Object*))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::GHNHKDMEDJI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHNHKDMEDJI))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::GHNHKDMEDJI a1)
		{
			return ((::System::Boolean(*)(::GHNHKDMEDJI))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::GHNHKDMEDJI a1)
		{
			return ((::System::Boolean(*)(::GHNHKDMEDJI))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::UInt32 ALBGCMAEADH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_ALBGCMAEADH_OFFSET))(this);
		}

		::System::Void AMKACBEJIPD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_AMKACBEJIPD_OFFSET))(this, a1);
		}

		::System::Int32 KEKEJIFFKDC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_KEKEJIFFKDC_OFFSET))(this);
		}

		::System::Void DFCCHECHFHM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_DFCCHECHFHM_OFFSET))(this, a1);
		}

		::System::UInt32 LDHLGKKGJCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_LDHLGKKGJCJ_OFFSET))(this);
		}

		::System::Void PPBLOBPAGKD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHNHKDMEDJI_PPBLOBPAGKD_OFFSET))(this, a1);
		}

	};
