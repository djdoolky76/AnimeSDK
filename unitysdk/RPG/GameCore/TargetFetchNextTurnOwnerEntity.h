#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchNextTurnOwnerEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB63CB0)
#define RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB63D40)
#define RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB63D20)
#define RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB63CC0)
#define RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB63C40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchNextTurnOwnerEntity_TypeDefinitionIndex = 23973;

	class TargetFetchNextTurnOwnerEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchNextTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHNEXTTURNOWNERENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
