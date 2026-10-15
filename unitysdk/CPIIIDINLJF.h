#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GJPBCNIIEOB.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CAOEEDDAPIK_NNBFMHKHMKO;
class OIHLKADLOGH;
namespace RPG::GameCore { class BattleEventDataComponent; }
namespace RPG::GameCore { class BattleGridFightTeamTraitData; }
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Transform; }

#define CPIIIDINLJF_AKNEFFLEMPC_OFFSET UNITYSDK_OFFSET(0xDCD6C80)
#define CPIIIDINLJF_CTOR_OFFSET UNITYSDK_OFFSET(0xDCD6CE0)
#define CPIIIDINLJF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xDCD6880)
#define CPIIIDINLJF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xDCD68E0)
#define CPIIIDINLJF_FIFIKEANLHL_OFFSET UNITYSDK_OFFSET(0xDCD6970)
#define CPIIIDINLJF_JFPBKPJMLHG_OFFSET UNITYSDK_OFFSET(0xDCD6BE0)
#define CPIIIDINLJF_LODBIKAMBPK_OFFSET UNITYSDK_OFFSET(0xDCD6AD0)
#define CPIIIDINLJF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xDCD69E0)
#define CPIIIDINLJF_OBMEAIAIEJL_OFFSET UNITYSDK_OFFSET(0xDCD6B80)
#define CPIIIDINLJF__ONBIND_OFFSET UNITYSDK_OFFSET(0xDCD66E0)

	class CPIIIDINLJF : public ::GJPBCNIIEOB
	{
	public:
		::UnityEngine::Transform* BHIDDJJBOMD; // 0x168
		::OIHLKADLOGH* MFKMHAOPMHL; // 0x170
		::IGKFNIEJGLM PMECLILMEDH; // 0x178
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIIDINLJF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIIDINLJF__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CPIIIDINLJF_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIIDINLJF_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CPIIIDINLJF_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void FIFIKEANLHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIIDINLJF_FIFIKEANLHL_OFFSET))(this);
		}

		::CAOEEDDAPIK_NNBFMHKHMKO* OBMEAIAIEJL()
		{
			return ((::CAOEEDDAPIK_NNBFMHKHMKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIIDINLJF_OBMEAIAIEJL_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* JFPBKPJMLHG()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIIDINLJF_JFPBKPJMLHG_OFFSET))(this);
		}

		::RPG::GameCore::BattleEventDataComponent* AKNEFFLEMPC()
		{
			return ((::RPG::GameCore::BattleEventDataComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIIDINLJF_AKNEFFLEMPC_OFFSET))(this);
		}

		::RPG::GameCore::BattleGridFightTeamTraitData* LODBIKAMBPK()
		{
			return ((::RPG::GameCore::BattleGridFightTeamTraitData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIIDINLJF_LODBIKAMBPK_OFFSET))(this);
		}

	};
