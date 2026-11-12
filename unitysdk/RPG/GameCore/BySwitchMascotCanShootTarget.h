#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BySwitchMascotCanShootTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1E749700)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E749880)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E749850)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E749710)
#define RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E7496D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BySwitchMascotCanShootTarget_TypeDefinitionIndex = 20511;

	class BySwitchMascotCanShootTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BySwitchMascotCanShootTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BySwitchMascotCanShootTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySwitchMascotCanShootTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::BySwitchMascotCanShootTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::BySwitchMascotCanShootTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYSWITCHMASCOTCANSHOOTTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
