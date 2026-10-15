#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TargetFetchByTauntAndAggro; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB60D60)
#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB60EC0)
#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB60E90)
#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB60D70)
#define RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB60D30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetFetchByTauntAndAggro_TypeDefinitionIndex = 23968;

	class TargetFetchByTauntAndAggro : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceTarget; // 0x10
		::System::Boolean RandomByAggroWhenFail; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchByTauntAndAggro*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetFetchByTauntAndAggro*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchByTauntAndAggro*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetFetchByTauntAndAggro* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetFetchByTauntAndAggro*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETFETCHBYTAUNTANDAGGRO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
