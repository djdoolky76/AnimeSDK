#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasCharacterRevived; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASCHARACTERREVIVED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CA3C0)
#define RPG_GAMECORE_BYHASCHARACTERREVIVED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4CA580)
#define RPG_GAMECORE_BYHASCHARACTERREVIVED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4CA550)
#define RPG_GAMECORE_BYHASCHARACTERREVIVED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CA3D0)
#define RPG_GAMECORE_BYHASCHARACTERREVIVED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CA390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasCharacterRevived_TypeDefinitionIndex = 23058;

	class ByHasCharacterRevived : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasCharacterRevived* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasCharacterRevived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasCharacterRevived* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasCharacterRevived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasCharacterRevived* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasCharacterRevived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasCharacterRevived* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasCharacterRevived*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASCHARACTERREVIVED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
