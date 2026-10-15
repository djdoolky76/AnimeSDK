#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByDeathOrder; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYDEATHORDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB42020)
#define RPG_GAMECORE_TARGETSORTBYDEATHORDER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB42140)
#define RPG_GAMECORE_TARGETSORTBYDEATHORDER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB420F0)
#define RPG_GAMECORE_TARGETSORTBYDEATHORDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB42030)
#define RPG_GAMECORE_TARGETSORTBYDEATHORDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB41F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByDeathOrder_TypeDefinitionIndex = 23984;

	class TargetSortByDeathOrder : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByDeathOrder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByDeathOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByDeathOrder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByDeathOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDeathOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDeathOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByDeathOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByDeathOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYDEATHORDER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
