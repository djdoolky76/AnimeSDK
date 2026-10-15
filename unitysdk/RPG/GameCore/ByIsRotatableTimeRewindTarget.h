#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsRotatableTimeRewindTarget; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D521030)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5211F0)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5211C0)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D521040)
#define RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D521000)

namespace RPG::GameCore
{
	class ByIsRotatableTimeRewindTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRotatableTimeRewindTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRotatableTimeRewindTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROTATABLETIMEREWINDTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
