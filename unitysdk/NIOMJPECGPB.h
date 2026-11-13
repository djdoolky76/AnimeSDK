#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryUnmanaged_2.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define NIOMJPECGPB_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1E7537A0)
#define NIOMJPECGPB_CABOHBPDNHM_OFFSET UNITYSDK_OFFSET(0x3F2FE10)
#define NIOMJPECGPB_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xCB40)
#define NIOMJPECGPB_DHNPLINBKNG_OFFSET UNITYSDK_OFFSET(0x3F2FDC0)
#define NIOMJPECGPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define NIOMJPECGPB_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E753540)
#define NIOMJPECGPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F2FD90)
#define NIOMJPECGPB_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E753450)
#define NIOMJPECGPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define NIOMJPECGPB_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define NIOMJPECGPB_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define NIOMJPECGPB_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define NIOMJPECGPB_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define NIOMJPECGPB_MCNFNEHEGAC_OFFSET UNITYSDK_OFFSET(0x3F2FE30)
#define NIOMJPECGPB_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1E753850)
#define NIOMJPECGPB_OMOGNAOKJCI_OFFSET UNITYSDK_OFFSET(0x3F2FDA0)

inline static constexpr unsigned int NIOMJPECGPB_TypeDefinitionIndex = 10716;

	struct alignas(8) NIOMJPECGPB
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + NIOMJPECGPB_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOMJPECGPB_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOMJPECGPB_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOMJPECGPB_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOMJPECGPB_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::NIOMJPECGPB a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::NIOMJPECGPB, ::System::Object*))((::PBYTE)hIl2Cpp + NIOMJPECGPB_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::NIOMJPECGPB a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::NIOMJPECGPB, ::System::Object*))((::PBYTE)hIl2Cpp + NIOMJPECGPB_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::NIOMJPECGPB a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIOMJPECGPB))((::PBYTE)hIl2Cpp + NIOMJPECGPB_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIOMJPECGPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOMJPECGPB_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::NIOMJPECGPB a1)
		{
			return ((::System::Boolean(*)(::NIOMJPECGPB))((::PBYTE)hIl2Cpp + NIOMJPECGPB_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::NIOMJPECGPB a1)
		{
			return ((::System::Boolean(*)(::NIOMJPECGPB))((::PBYTE)hIl2Cpp + NIOMJPECGPB_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> OMOGNAOKJCI()
		{
			return ((::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOMJPECGPB_OMOGNAOKJCI_OFFSET))(this);
		}

		::System::Void DHNPLINBKNG(::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>))((::PBYTE)hIl2Cpp + NIOMJPECGPB_DHNPLINBKNG_OFFSET))(this, a1);
		}

		::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> CABOHBPDNHM()
		{
			return ((::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NIOMJPECGPB_CABOHBPDNHM_OFFSET))(this);
		}

		::System::Void MCNFNEHEGAC(::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32> a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ConfigDataPoolDictionaryUnmanaged_2<::System::UInt64, ::System::UInt32>))((::PBYTE)hIl2Cpp + NIOMJPECGPB_MCNFNEHEGAC_OFFSET))(this, a1);
		}

	};
