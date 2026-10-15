#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTargetHitBoxActive; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTARGETHITBOXACTIVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D539C90)
#define RPG_GAMECORE_BYTARGETHITBOXACTIVE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D539E50)
#define RPG_GAMECORE_BYTARGETHITBOXACTIVE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D539E20)
#define RPG_GAMECORE_BYTARGETHITBOXACTIVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D539CA0)
#define RPG_GAMECORE_BYTARGETHITBOXACTIVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D539C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTargetHitBoxActive_TypeDefinitionIndex = 20214;

	class ByTargetHitBoxActive : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetHitBoxActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetHitBoxActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTargetHitBoxActive* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTargetHitBoxActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetHitBoxActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetHitBoxActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTargetHitBoxActive* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTargetHitBoxActive*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTARGETHITBOXACTIVE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
