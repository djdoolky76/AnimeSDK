#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByGridFightPower; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB43240)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB43360)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB43310)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB43250)
#define RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB43140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByGridFightPower_TypeDefinitionIndex = 23994;

	class TargetSortByGridFightPower : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByGridFightPower* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByGridFightPower*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByGridFightPower* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByGridFightPower*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightPower* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightPower*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByGridFightPower* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByGridFightPower*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYGRIDFIGHTPOWER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
