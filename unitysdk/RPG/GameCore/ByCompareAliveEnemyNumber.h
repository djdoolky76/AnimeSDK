#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareAliveEnemyNumber; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D49AA00)
#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D49AC70)
#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D49AC40)
#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D49AA10)
#define RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D49A9D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareAliveEnemyNumber_TypeDefinitionIndex = 22986;

	class ByCompareAliveEnemyNumber : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::CompareType CompareType; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* CompareValue; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareAliveEnemyNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareAliveEnemyNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAliveEnemyNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareAliveEnemyNumber* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareAliveEnemyNumber*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREALIVEENEMYNUMBER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
