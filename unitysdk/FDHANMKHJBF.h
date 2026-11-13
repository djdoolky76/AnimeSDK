#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class DriftComponentData; }
namespace System { class Object; }

#define FDHANMKHJBF_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x3F205F0)
#define FDHANMKHJBF_BBNJCKPKPDN_OFFSET UNITYSDK_OFFSET(0x1E4427B0)
#define FDHANMKHJBF_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xCB40)
#define FDHANMKHJBF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7F0900)
#define FDHANMKHJBF_DLDBLNNPHKE_OFFSET UNITYSDK_OFFSET(0x1E442680)
#define FDHANMKHJBF_EQUALS_OFFSET UNITYSDK_OFFSET(0x3F205E0)
#define FDHANMKHJBF_FEIIDFFOICL_OFFSET UNITYSDK_OFFSET(0x1E442570)
#define FDHANMKHJBF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define FDHANMKHJBF_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x7F6A70)
#define FDHANMKHJBF_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xC8F0)
#define FDHANMKHJBF_GET_POOL_OFFSET UNITYSDK_OFFSET(0x6C8DB0)
#define FDHANMKHJBF_INIT_OFFSET UNITYSDK_OFFSET(0x6513E0)
#define FDHANMKHJBF_JMEHLOIMKAE_OFFSET UNITYSDK_OFFSET(0x3F20650)
#define FDHANMKHJBF_MODFGNFHPPN_OFFSET UNITYSDK_OFFSET(0x3F20660)
#define FDHANMKHJBF_NHCFLDCDLCP_OFFSET UNITYSDK_OFFSET(0x1E442860)
#define FDHANMKHJBF_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x3F20600)

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
