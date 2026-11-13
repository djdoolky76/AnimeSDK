#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAdvLocalPlayer; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x206E5020)
#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x206E51A0)
#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x206E5170)
#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x206E5030)
#define RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x206E4FF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvLocalPlayer_TypeDefinitionIndex = 24320;

	class TargetFetchAdvLocalPlayer : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Boolean IncludeStoryPlayer; // 0x10
		::System::Boolean FetchLatestTeamLeader; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLocalPlayer* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLOCALPLAYER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
