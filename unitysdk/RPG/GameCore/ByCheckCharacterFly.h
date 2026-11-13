#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckCharacterFly; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCHARACTERFLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF66280)
#define RPG_GAMECORE_BYCHECKCHARACTERFLY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DF664A0)
#define RPG_GAMECORE_BYCHECKCHARACTERFLY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DF66440)
#define RPG_GAMECORE_BYCHECKCHARACTERFLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DF662C0)
#define RPG_GAMECORE_BYCHECKCHARACTERFLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF66220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckCharacterFly_TypeDefinitionIndex = 23962;

	class ByCheckCharacterFly : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckCharacterFly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckCharacterFly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckCharacterFly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckCharacterFly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterFly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterFly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckCharacterFly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckCharacterFly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCHARACTERFLY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
