#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/RogueMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareRogueMode; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPAREROGUEMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4CFB30)
#define RPG_GAMECORE_BYCOMPAREROGUEMODE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4CFD20)
#define RPG_GAMECORE_BYCOMPAREROGUEMODE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4CFCF0)
#define RPG_GAMECORE_BYCOMPAREROGUEMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4CFB40)
#define RPG_GAMECORE_BYCOMPAREROGUEMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4CFB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareRogueMode_TypeDefinitionIndex = 23062;

	class ByCompareRogueMode : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::RogueMode RogueMode; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareRogueMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareRogueMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEMODE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareRogueMode* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareRogueMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREROGUEMODE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
