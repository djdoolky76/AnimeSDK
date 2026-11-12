#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByHaveAbilityTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYHAVEABILITYTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1E70F3A0)
#define RPG_GAMECORE_BYHAVEABILITYTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E70F520)
#define RPG_GAMECORE_BYHAVEABILITYTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E70F4F0)
#define RPG_GAMECORE_BYHAVEABILITYTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E70F3B0)
#define RPG_GAMECORE_BYHAVEABILITYTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E70F370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByHaveAbilityTarget_TypeDefinitionIndex = 20587;

	class ByHaveAbilityTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEABILITYTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveAbilityTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEABILITYTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByHaveAbilityTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByHaveAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEABILITYTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveAbilityTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEABILITYTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByHaveAbilityTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByHaveAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYHAVEABILITYTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
