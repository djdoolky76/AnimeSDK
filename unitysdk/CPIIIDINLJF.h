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

#define CPIIIDINLJF_AKNEFFLEMPC_OFFSET UNITYSDK_OFFSET(0x19180ED0)
#define CPIIIDINLJF_CTOR_OFFSET UNITYSDK_OFFSET(0x19180F30)
#define CPIIIDINLJF_FIFIKEANLHL_OFFSET UNITYSDK_OFFSET(0x19180BC0)
#define CPIIIDINLJF_JFPBKPJMLHG_OFFSET UNITYSDK_OFFSET(0x19180E30)
#define CPIIIDINLJF_LODBIKAMBPK_OFFSET UNITYSDK_OFFSET(0x19180D20)
#define CPIIIDINLJF_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x19180C30)
#define CPIIIDINLJF_OBMEAIAIEJL_OFFSET UNITYSDK_OFFSET(0x19180DD0)
#define CPIIIDINLJF__ONBIND_OFFSET UNITYSDK_OFFSET(0x19180930)
#define CPIIIDINLJF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x19180AD0)
#define CPIIIDINLJF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19180B30)

inline static constexpr unsigned int CPIIIDINLJF_TypeDefinitionIndex = 74313;

	class CPIIIDINLJF : public ::GJPBCNIIEOB
	{
	public:
		::UnityEngine::Transform* BHIDDJJBOMD; // 0x168
		::IGKFNIEJGLM PMECLILMEDH; // 0x170
		::OIHLKADLOGH* MFKMHAOPMHL; // 0x178
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIIDINLJF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIIDINLJF__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CPIIIDINLJF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPIIIDINLJF__SETUPVIEW_OFFSET))(this);
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
