#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class DriftComponentData; }
namespace System { class Object; }

#define FDHANMKHJBF_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x3E87560)
#define FDHANMKHJBF_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1DFB48C0)
#define FDHANMKHJBF_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0x31619E0)
#define FDHANMKHJBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3E7C580)
#define FDHANMKHJBF_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1DFB4790)
#define FDHANMKHJBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x3E87550)
#define FDHANMKHJBF_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1DFB4680)
#define FDHANMKHJBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x318C7A0)
#define FDHANMKHJBF_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x318C5A0)
#define FDHANMKHJBF_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define FDHANMKHJBF_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define FDHANMKHJBF_INIT_OFFSET UNITYSDK_OFFSET(0x18D10)
#define FDHANMKHJBF_JMEHLOIMKAE_OFFSET UNITYSDK_OFFSET(0x3E875C0)
#define FDHANMKHJBF_MODFGNFHPPN_OFFSET UNITYSDK_OFFSET(0x3E875D0)
#define FDHANMKHJBF_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1DFB4970)
#define FDHANMKHJBF_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x3E87570)

inline static constexpr unsigned int FDHANMKHJBF_TypeDefinitionIndex = 10670;

	struct alignas(8) FDHANMKHJBF
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + FDHANMKHJBF_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHANMKHJBF_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHANMKHJBF_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHANMKHJBF_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHANMKHJBF_DISPOSE_OFFSET))(this);
		}

		/*
		static ::System::Boolean FEIIDFFOICL(::FDHANMKHJBF a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::FDHANMKHJBF, ::System::Object*))((::PBYTE)hIl2Cpp + FDHANMKHJBF_FEIIDFFOICL_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean DLDBLNNPHKE(::FDHANMKHJBF a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::FDHANMKHJBF, ::System::Object*))((::PBYTE)hIl2Cpp + FDHANMKHJBF_DLDBLNNPHKE_OFFSET))(a1, a2);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::FDHANMKHJBF a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FDHANMKHJBF))((::PBYTE)hIl2Cpp + FDHANMKHJBF_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FDHANMKHJBF_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHANMKHJBF_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean BBNJCKPKPDN(::FDHANMKHJBF a1)
		{
			return ((::System::Boolean(*)(::FDHANMKHJBF))((::PBYTE)hIl2Cpp + FDHANMKHJBF_BBNJCKPKPDN_OFFSET))(a1);
		}
		*/

		/*
		static ::System::Boolean NHCFLDCDLCP(::FDHANMKHJBF a1)
		{
			return ((::System::Boolean(*)(::FDHANMKHJBF))((::PBYTE)hIl2Cpp + FDHANMKHJBF_NHCFLDCDLCP_OFFSET))(a1);
		}
		*/

		::RPG::GameCore::DriftComponentData* ANALOEDDDHD()
		{
			return ((::RPG::GameCore::DriftComponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHANMKHJBF_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::RPG::GameCore::DriftComponentData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DriftComponentData*))((::PBYTE)hIl2Cpp + FDHANMKHJBF_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::Int32 JMEHLOIMKAE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FDHANMKHJBF_JMEHLOIMKAE_OFFSET))(this);
		}

		::System::Void MODFGNFHPPN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FDHANMKHJBF_MODFGNFHPPN_OFFSET))(this, a1);
		}

	};
