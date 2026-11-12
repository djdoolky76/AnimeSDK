#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchLastKillCaster; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE11D90)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE11E40)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE11E00)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE11DA0)
#define RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE11D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchLastKillCaster_TypeDefinitionIndex = 24460;

	class TargetFetchLastKillCaster : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLastKillCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLastKillCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchLastKillCaster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchLastKillCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchLastKillCaster* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchLastKillCaster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHLASTKILLCASTER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
