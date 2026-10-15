#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHasPlayerMoveInput; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CC4D0)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4CC650)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4CC620)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CC4E0)
#define RPG_GAMECORE_BYHASPLAYERMOVEINPUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CC4A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHasPlayerMoveInput_TypeDefinitionIndex = 20255;

	class ByHasPlayerMoveInput : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasPlayerMoveInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasPlayerMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHasPlayerMoveInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHasPlayerMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPlayerMoveInput* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPlayerMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHasPlayerMoveInput* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHasPlayerMoveInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHASPLAYERMOVEINPUT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
