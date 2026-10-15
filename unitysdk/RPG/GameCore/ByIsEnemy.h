#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsEnemy; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISENEMY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D511D50)
#define RPG_GAMECORE_BYISENEMY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D511F50)
#define RPG_GAMECORE_BYISENEMY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D511F20)
#define RPG_GAMECORE_BYISENEMY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D511D60)
#define RPG_GAMECORE_BYISENEMY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D511D20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsEnemy_TypeDefinitionIndex = 23483;

	class ByIsEnemy : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetTypeA; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetTypeB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENEMY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsEnemy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENEMY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsEnemy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENEMY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnemy* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENEMY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsEnemy* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsEnemy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISENEMY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
