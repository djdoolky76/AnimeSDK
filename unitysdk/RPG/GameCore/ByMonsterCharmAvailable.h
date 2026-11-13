#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByMonsterCharmAvailable; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYMONSTERCHARMAVAILABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2210A0)
#define RPG_GAMECORE_BYMONSTERCHARMAVAILABLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E221260)
#define RPG_GAMECORE_BYMONSTERCHARMAVAILABLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E221230)
#define RPG_GAMECORE_BYMONSTERCHARMAVAILABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E2210B0)
#define RPG_GAMECORE_BYMONSTERCHARMAVAILABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E221070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByMonsterCharmAvailable_TypeDefinitionIndex = 24120;

	class ByMonsterCharmAvailable : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMONSTERCHARMAVAILABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByMonsterCharmAvailable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByMonsterCharmAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMONSTERCHARMAVAILABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByMonsterCharmAvailable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByMonsterCharmAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMONSTERCHARMAVAILABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMonsterCharmAvailable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMonsterCharmAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMONSTERCHARMAVAILABLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByMonsterCharmAvailable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByMonsterCharmAvailable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYMONSTERCHARMAVAILABLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
