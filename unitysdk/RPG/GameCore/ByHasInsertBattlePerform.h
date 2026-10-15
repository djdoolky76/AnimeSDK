#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasInsertBattlePerform; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CBB50)
#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4CBCD0)
#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4CBCA0)
#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CBB60)
#define RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CBB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasInsertBattlePerform_TypeDefinitionIndex = 23379;

	class ByHasInsertBattlePerform : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasInsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasInsertBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasInsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasInsertBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasInsertBattlePerform* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasInsertBattlePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASINSERTBATTLEPERFORM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
