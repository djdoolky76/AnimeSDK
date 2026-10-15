#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasAssistAvatar; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASASSISTAVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4C9890)
#define RPG_GAMECORE_BYHASASSISTAVATAR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4C9A10)
#define RPG_GAMECORE_BYHASASSISTAVATAR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4C99E0)
#define RPG_GAMECORE_BYHASASSISTAVATAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4C98A0)
#define RPG_GAMECORE_BYHASASSISTAVATAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4C9860)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasAssistAvatar_TypeDefinitionIndex = 20805;

	class ByHasAssistAvatar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasAssistAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasAssistAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASASSISTAVATAR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
