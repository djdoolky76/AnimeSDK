#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAbilityTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHABILITYTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE096A0)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE09730)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE09710)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE096B0)
#define RPG_GAMECORE_TARGETFETCHABILITYTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE09630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAbilityTarget_TypeDefinitionIndex = 24367;

	class TargetFetchAbilityTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAbilityTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAbilityTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAbilityTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAbilityTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHABILITYTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
