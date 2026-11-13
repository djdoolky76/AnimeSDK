#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define BOILHFAIOEH_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1EB01230)
#define BOILHFAIOEH_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xCB40)
#define BOILHFAIOEH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define BOILHFAIOEH_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1EB00FD0)
#define BOILHFAIOEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F345E0)
#define BOILHFAIOEH_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1EB00EE0)
#define BOILHFAIOEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define BOILHFAIOEH_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define BOILHFAIOEH_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define BOILHFAIOEH_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define BOILHFAIOEH_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define BOILHFAIOEH_JIHIMEFLMBJ_OFFSET UNITYSDK_OFFSET(0x3F34660)
#define BOILHFAIOEH_KIKIJPCONHA_OFFSET UNITYSDK_OFFSET(0x3F34650)
#define BOILHFAIOEH_NCBKEEDDCOC_OFFSET UNITYSDK_OFFSET(0x3F34600)
#define BOILHFAIOEH_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1EB012E0)
#define BOILHFAIOEH_POAKKODIHIP_OFFSET UNITYSDK_OFFSET(0x3F345F0)

inline static constexpr unsigned int BOILHFAIOEH_TypeDefinitionIndex = 10673;

	struct alignas(8) BOILHFAIOEH
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + BOILHFAIOEH_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOILHFAIOEH_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOILHFAIOEH_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOILHFAIOEH_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOILHFAIOEH_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::BOILHFAIOEH a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::BOILHFAIOEH, ::System::Object*))((::PBYTE)hIl2Cpp + BOILHFAIOEH_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::BOILHFAIOEH a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::BOILHFAIOEH, ::System::Object*))((::PBYTE)hIl2Cpp + BOILHFAIOEH_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::BOILHFAIOEH a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOILHFAIOEH))((::PBYTE)hIl2Cpp + BOILHFAIOEH_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOILHFAIOEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOILHFAIOEH_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::BOILHFAIOEH a1)
		{
			return ((::System::Boolean(*)(::BOILHFAIOEH))((::PBYTE)hIl2Cpp + BOILHFAIOEH_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::BOILHFAIOEH a1)
		{
			return ((::System::Boolean(*)(::BOILHFAIOEH))((::PBYTE)hIl2Cpp + BOILHFAIOEH_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::System::Int32 POAKKODIHIP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOILHFAIOEH_POAKKODIHIP_OFFSET))(this);
		}

		::System::Void NCBKEEDDCOC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BOILHFAIOEH_NCBKEEDDCOC_OFFSET))(this, a1);
		}

		::System::Single KIKIJPCONHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BOILHFAIOEH_KIKIJPCONHA_OFFSET))(this);
		}

		::System::Void JIHIMEFLMBJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BOILHFAIOEH_JIHIMEFLMBJ_OFFSET))(this, a1);
		}

	};
