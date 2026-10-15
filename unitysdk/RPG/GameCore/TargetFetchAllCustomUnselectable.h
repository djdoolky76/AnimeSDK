#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetFetchAllCustomUnselectable; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB31B70)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB31CD0)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB31CA0)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB31B80)
#define RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB31B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAllCustomUnselectable_TypeDefinitionIndex = 23937;

	class TargetFetchAllCustomUnselectable : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceEntity; // 0x10
		::System::Boolean RemoveForceUnselectable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAllCustomUnselectable* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAllCustomUnselectable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHALLCUSTOMUNSELECTABLE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
