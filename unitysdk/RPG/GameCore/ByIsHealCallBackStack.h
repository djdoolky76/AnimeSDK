#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsHealCallBackStack; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISHEALCALLBACKSTACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E726DD0)
#define RPG_GAMECORE_BYISHEALCALLBACKSTACK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E726F50)
#define RPG_GAMECORE_BYISHEALCALLBACKSTACK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E726F20)
#define RPG_GAMECORE_BYISHEALCALLBACKSTACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E726DE0)
#define RPG_GAMECORE_BYISHEALCALLBACKSTACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E726DA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsHealCallBackStack_TypeDefinitionIndex = 23943;

	class ByIsHealCallBackStack : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHEALCALLBACKSTACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsHealCallBackStack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsHealCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHEALCALLBACKSTACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsHealCallBackStack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsHealCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHEALCALLBACKSTACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHealCallBackStack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHealCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHEALCALLBACKSTACK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHealCallBackStack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHealCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHEALCALLBACKSTACK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
