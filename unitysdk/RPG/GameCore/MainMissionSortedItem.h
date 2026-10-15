#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MainMissionSortedItem; }
namespace RPG::GameCore { class SubMissionSortedItem; }

#define RPG_GAMECORE_MAINMISSIONSORTEDITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FC850)
#define RPG_GAMECORE_MAINMISSIONSORTEDITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7FC790)

namespace RPG::GameCore
{
	class MainMissionSortedItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SubMissionSortedItem*>* SubMissionSortList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSORTEDITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MainMissionSortedItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MainMissionSortedItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONSORTEDITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
