#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameCoreParamFlag.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByContainsParamFlag; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4BB030)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4BB1F0)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4BB1C0)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4BB040)
#define RPG_GAMECORE_BYCONTAINSPARAMFLAG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4BB000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByContainsParamFlag_TypeDefinitionIndex = 23538;

	class ByContainsParamFlag : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::GameCoreParamFlag Flag; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainsParamFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainsParamFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainsParamFlag* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainsParamFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsParamFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsParamFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainsParamFlag* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainsParamFlag*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINSPARAMFLAG_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
