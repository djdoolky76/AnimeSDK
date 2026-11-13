#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_ChainLightning; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECGPDFFMFBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D59E0)
#define ECGPDFFMFBN_DENCBPJIHEN_OFFSET UNITYSDK_OFFSET(0x1C3D69E0)
#define ECGPDFFMFBN_FAJECLMHCIL_OFFSET UNITYSDK_OFFSET(0x1C3D5D20)
#define ECGPDFFMFBN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C3D6D60)
#define ECGPDFFMFBN_HIJBEPFJDLC_OFFSET UNITYSDK_OFFSET(0x1C3D6100)
#define ECGPDFFMFBN_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x1C3D5B00)
#define ECGPDFFMFBN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x1C3D5FC0)
#define ECGPDFFMFBN_LAKHOMDOENC_OFFSET UNITYSDK_OFFSET(0x1C3D60A0)
#define ECGPDFFMFBN_ONBJAKCADJN_OFFSET UNITYSDK_OFFSET(0x1C3D6660)

inline static constexpr unsigned int ECGPDFFMFBN_TypeDefinitionIndex = 80629;

	class ECGPDFFMFBN : public ::JNALBIEDNLH
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* AKCDHCPDHCI; // 0x28
		::RPG::GameCore::ChenLingBattleAbility_ChainLightning* AHMOJHDKNFB; // 0x30
		::System::Collections::Generic::HashSet_1<::System::Int32>* BGJCNPHIIOG; // 0x38
		::System::Int32 PPJHMPNKLFD; // 0x40
		::System::Single BEEHPPHKLDC; // 0x44
		::System::Single PPFOEPHMLKM; // 0x48
		::System::Int32 BENGKHGIGGO; // 0x4C
		::System::Int32 NCEPPDEAFCJ; // 0x50
		::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::CIIKBJFOKHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::CIIKBJFOKHL*))((::PBYTE)hIl2Cpp + ECGPDFFMFBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void HKKFFCBJOKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGPDFFMFBN_HKKFFCBJOKM_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ECGPDFFMFBN_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean FAJECLMHCIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGPDFFMFBN_FAJECLMHCIL_OFFSET))(this);
		}

		::System::Boolean LAKHOMDOENC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGPDFFMFBN_LAKHOMDOENC_OFFSET))(this);
		}

		::ALMFLCJCHKP* ONBJAKCADJN()
		{
			return ((::ALMFLCJCHKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGPDFFMFBN_ONBJAKCADJN_OFFSET))(this);
		}

		::System::Void HIJBEPFJDLC(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ECGPDFFMFBN_HIJBEPFJDLC_OFFSET))(this, a1);
		}

		::System::Void DENCBPJIHEN(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + ECGPDFFMFBN_DENCBPJIHEN_OFFSET))(this, a1, a2);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECGPDFFMFBN_HADOHLNHHGB_OFFSET))(this);
		}

	};
