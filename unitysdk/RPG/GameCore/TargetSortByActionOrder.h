#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByActionOrder; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYACTIONORDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB416A0)
#define RPG_GAMECORE_TARGETSORTBYACTIONORDER_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB41820)
#define RPG_GAMECORE_TARGETSORTBYACTIONORDER_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB417F0)
#define RPG_GAMECORE_TARGETSORTBYACTIONORDER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB416B0)
#define RPG_GAMECORE_TARGETSORTBYACTIONORDER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB41670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByActionOrder_TypeDefinitionIndex = 23989;

	class TargetSortByActionOrder : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Boolean FilterNoActionEntity; // 0x11
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByActionOrder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByActionOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByActionOrder* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByActionOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByActionOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByActionOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByActionOrder* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByActionOrder*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYACTIONORDER_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
