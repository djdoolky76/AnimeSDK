#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConfigDataPoolDictionaryUnmanaged_2.h"
class LELCKJPOPAO;
namespace System { class Object; }

#define NIOMJPECGPB_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1D1E72D0)
#define NIOMJPECGPB_CABOHBPDNHM_OFFSET UNITYSDK_OFFSET(0x3C3DB80)
#define NIOMJPECGPB_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x2F874F0)
#define NIOMJPECGPB_DHNPLINBKNG_OFFSET UNITYSDK_OFFSET(0x3C3DB30)
#define NIOMJPECGPB_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C2DCD0)
#define NIOMJPECGPB_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1D1E71A0)
#define NIOMJPECGPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C3DB00)
#define NIOMJPECGPB_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1D1E7090)
#define NIOMJPECGPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2FB1A20)
#define NIOMJPECGPB_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x2FB1820)
#define NIOMJPECGPB_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define NIOMJPECGPB_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define NIOMJPECGPB_INIT_OFFSET UNITYSDK_OFFSET(0x140C0)
#define NIOMJPECGPB_MCNFNEHEGAC_OFFSET UNITYSDK_OFFSET(0x3C3DBA0)
#define NIOMJPECGPB_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1D1E7380)
#define NIOMJPECGPB_OMOGNAOKJCI_OFFSET UNITYSDK_OFFSET(0x3C3DB10)

inline static constexpr unsigned int NIOMJPECGPB_TypeDefinitionIndex = 10700;

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
