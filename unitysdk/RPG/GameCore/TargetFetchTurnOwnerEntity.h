#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetFetchTurnOwnerEntity; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB390D0)
#define RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB390C0)
#define RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB390A0)
#define RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB39040)
#define RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB38FD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchTurnOwnerEntity_TypeDefinitionIndex = 23998;

	class TargetFetchTurnOwnerEntity : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchTurnOwnerEntity* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchTurnOwnerEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHTURNOWNERENTITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
