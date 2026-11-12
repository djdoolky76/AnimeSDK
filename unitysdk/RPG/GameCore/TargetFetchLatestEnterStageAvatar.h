#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchLatestEnterStageAvatar; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE123C0)
#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE12450)
#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE12430)
#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE123D0)
#define RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE12350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLatestEnterStageAvatar_TypeDefinitionIndex = 24429;

	class TargetFetchLatestEnterStageAvatar : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLatestEnterStageAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLATESTENTERSTAGEAVATAR_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
