#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchAdvLineup; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHADVLINEUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5B010)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB5B0A0)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB5B080)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB5B020)
#define RPG_GAMECORE_TARGETFETCHADVLINEUP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB5AFA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchAdvLineup_TypeDefinitionIndex = 23925;

	class TargetFetchAdvLineup : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvLineup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchAdvLineup* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchAdvLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLineup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchAdvLineup* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchAdvLineup*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHADVLINEUP_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
