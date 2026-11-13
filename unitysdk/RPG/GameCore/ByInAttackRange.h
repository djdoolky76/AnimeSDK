#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByInAttackRange; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINATTACKRANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1F78A0)
#define RPG_GAMECORE_BYINATTACKRANGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E1F7C80)
#define RPG_GAMECORE_BYINATTACKRANGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E1F7BE0)
#define RPG_GAMECORE_BYINATTACKRANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E1F7920)
#define RPG_GAMECORE_BYINATTACKRANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E1F7800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByInAttackRange_TypeDefinitionIndex = 20368;

	class ByInAttackRange : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::System::Boolean OverrideCharacterData; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single OverrideAttackRange; // 0x2C
		::System::Single OverrideAttackAngle; // 0x30
		::System::Boolean ConsiderObstacle; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINATTACKRANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInAttackRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInAttackRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINATTACKRANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInAttackRange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInAttackRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINATTACKRANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInAttackRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInAttackRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINATTACKRANGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInAttackRange* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInAttackRange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINATTACKRANGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
