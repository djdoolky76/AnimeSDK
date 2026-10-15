#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsHitAllCallBackStack; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D516510)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D516690)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D516660)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D516520)
#define RPG_GAMECORE_BYISHITALLCALLBACKSTACK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5164E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsHitAllCallBackStack_TypeDefinitionIndex = 23498;

	class ByIsHitAllCallBackStack : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsHitAllCallBackStack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsHitAllCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsHitAllCallBackStack* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsHitAllCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHitAllCallBackStack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHitAllCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsHitAllCallBackStack* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsHitAllCallBackStack*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISHITALLCALLBACKSTACK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
