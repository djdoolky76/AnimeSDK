#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchTimeRewindStrikeSource; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE15C20)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE15CD0)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE15C90)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE15C30)
#define RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE15B90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTimeRewindStrikeSource_TypeDefinitionIndex = 24344;

	class TargetFetchTimeRewindStrikeSource : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTimeRewindStrikeSource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTIMEREWINDSTRIKESOURCE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
