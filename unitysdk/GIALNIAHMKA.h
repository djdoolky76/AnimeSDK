#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
class DGKBJOHFPBK;
class EKFMIDBJDIA;
class ENEIHJJPNPI;
class FABMDCOFHCG;
namespace RPG::GameCore { class AbilityComponent; }
namespace RPG::GameCore { class StageBattleEventRow; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierConfig; }

#define GIALNIAHMKA_AJALNLLKCBC_OFFSET UNITYSDK_OFFSET(0x1A3D2EC0)
#define GIALNIAHMKA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D43A0)
#define GIALNIAHMKA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3D3F80)
#define GIALNIAHMKA_FCBAFNHBGIC_OFFSET UNITYSDK_OFFSET(0x1A3D38B0)
#define GIALNIAHMKA_GET_CONFIGREF_OFFSET UNITYSDK_OFFSET(0x1A3D4370)
#define GIALNIAHMKA_GMLOGAMBGDB_OFFSET UNITYSDK_OFFSET(0x1A3D3A10)
#define GIALNIAHMKA_GNCCOOMHHCK_OFFSET UNITYSDK_OFFSET(0x1A3D2E50)
#define GIALNIAHMKA_HKGNGCJOANP_OFFSET UNITYSDK_OFFSET(0x1A3D2AD0)
#define GIALNIAHMKA_JBCPPHPBBAO_OFFSET UNITYSDK_OFFSET(0x1A3D42D0)
#define GIALNIAHMKA_KAFNGDPGNLD_OFFSET UNITYSDK_OFFSET(0x1A3D4390)
#define GIALNIAHMKA_LAIGHCKAOJB_OFFSET UNITYSDK_OFFSET(0x1A3D32F0)
#define GIALNIAHMKA_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0x1A3D2950)
#define GIALNIAHMKA_LNCNDKCKOOA_OFFSET UNITYSDK_OFFSET(0x1A3D3E20)
#define GIALNIAHMKA_OBAKIMAJDKE_OFFSET UNITYSDK_OFFSET(0x1A3D4010)
#define GIALNIAHMKA_SET_CONFIGREF_OFFSET UNITYSDK_OFFSET(0x1A3D4380)

inline static constexpr unsigned int GIALNIAHMKA_TypeDefinitionIndex = 58928;

	class GIALNIAHMKA : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::FABMDCOFHCG* PLJGKAIBOAC; // 0x18
		::RPG::GameCore::TurnBasedAbilityComponent* CCFBDGEJJCK; // 0x20
		::RPG::GameCore::StageBattleEventRow* _ConfigRef_k__BackingField; // 0x28
		::RPG::GameCore::AbilityComponent* ILLOMEFMFHM; // 0x30
		::DGKBJOHFPBK* DALJBPPJJIE; // 0x38
		::System::Boolean MJKPLDBEDNI; // 0x40
		// static const ::System::String* OAABLIMCEOC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIALNIAHMKA_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF(::RPG::GameCore::StageBattleEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageBattleEventRow*))((::PBYTE)hIl2Cpp + GIALNIAHMKA_LMCEDCHJKFF_OFFSET))(this, a1);
		}

		::System::Void GNCCOOMHHCK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GIALNIAHMKA_GNCCOOMHHCK_OFFSET))(this, a1);
		}

		::System::Void AJALNLLKCBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIALNIAHMKA_AJALNLLKCBC_OFFSET))(this);
		}

		::System::Void LAIGHCKAOJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIALNIAHMKA_LAIGHCKAOJB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIALNIAHMKA_DISPOSE_OFFSET))(this);
		}

		::System::Void FCBAFNHBGIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIALNIAHMKA_FCBAFNHBGIC_OFFSET))(this);
		}

		::System::Void LNCNDKCKOOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIALNIAHMKA_LNCNDKCKOOA_OFFSET))(this);
		}

		::System::Void OBAKIMAJDKE(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GIALNIAHMKA_OBAKIMAJDKE_OFFSET))(this, a1);
		}

		::System::Void JBCPPHPBBAO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GIALNIAHMKA_JBCPPHPBBAO_OFFSET))(this, a1);
		}

		::System::Void HKGNGCJOANP(::ENEIHJJPNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + GIALNIAHMKA_HKGNGCJOANP_OFFSET))(this, a1);
		}

		::System::Void GMLOGAMBGDB(::RPG::GameCore::TurnBasedModifierConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierConfig*))((::PBYTE)hIl2Cpp + GIALNIAHMKA_GMLOGAMBGDB_OFFSET))(this, a1);
		}

		::RPG::GameCore::StageBattleEventRow* get_ConfigRef()
		{
			return ((::RPG::GameCore::StageBattleEventRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIALNIAHMKA_GET_CONFIGREF_OFFSET))(this);
		}

		::System::Void set_ConfigRef(::RPG::GameCore::StageBattleEventRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageBattleEventRow*))((::PBYTE)hIl2Cpp + GIALNIAHMKA_SET_CONFIGREF_OFFSET))(this, a1);
		}

		::System::Boolean KAFNGDPGNLD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GIALNIAHMKA_KAFNGDPGNLD_OFFSET))(this);
		}

	};
