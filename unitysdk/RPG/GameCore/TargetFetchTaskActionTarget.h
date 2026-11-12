#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchTaskActionTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE15780)
#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE15810)
#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE157F0)
#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE15790)
#define RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE15710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTaskActionTarget_TypeDefinitionIndex = 24380;

	class TargetFetchTaskActionTarget : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTaskActionTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTaskActionTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTaskActionTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTaskActionTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTaskActionTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTaskActionTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTaskActionTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTaskActionTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTASKACTIONTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
