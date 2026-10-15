#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JNALBIEDNLH.h"
class ALMFLCJCHKP;
class CIIKBJFOKHL;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_ChainLightning; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECGPDFFMFBN_CTOR_OFFSET UNITYSDK_OFFSET(0x12D0C1A0)
#define ECGPDFFMFBN_DENCBPJIHEN_OFFSET UNITYSDK_OFFSET(0x12D0D1A0)
#define ECGPDFFMFBN_FAJECLMHCIL_OFFSET UNITYSDK_OFFSET(0x12D0C4E0)
#define ECGPDFFMFBN_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x12D0D520)
#define ECGPDFFMFBN_HIJBEPFJDLC_OFFSET UNITYSDK_OFFSET(0x12D0C8C0)
#define ECGPDFFMFBN_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0x12D0C2C0)
#define ECGPDFFMFBN_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12D0C780)
#define ECGPDFFMFBN_LAKHOMDOENC_OFFSET UNITYSDK_OFFSET(0x12D0C860)
#define ECGPDFFMFBN_ONBJAKCADJN_OFFSET UNITYSDK_OFFSET(0x12D0CE20)

inline static constexpr unsigned int ECGPDFFMFBN_TypeDefinitionIndex = 77895;

	class ECGPDFFMFBN : public ::JNALBIEDNLH
	{
	public:
		::RPG::GameCore::ChenLingBattleAbility_ChainLightning* AHMOJHDKNFB; // 0x28
		::System::Collections::Generic::HashSet_1<::System::Int32>* BGJCNPHIIOG; // 0x30
		::System::Collections::Generic::List_1<::System::Int32>* AKCDHCPDHCI; // 0x38
		::System::Int32 BENGKHGIGGO; // 0x40
		::System::Int32 NCEPPDEAFCJ; // 0x44
		::System::Single PPFOEPHMLKM; // 0x48
		::System::Single BEEHPPHKLDC; // 0x4C
		::System::Int32 PPJHMPNKLFD; // 0x50
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
