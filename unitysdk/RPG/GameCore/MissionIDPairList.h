#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionIDPair; }
namespace RPG::GameCore { class MissionIDPairList; }

#define RPG_GAMECORE_MISSIONIDPAIRLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D887510)
#define RPG_GAMECORE_MISSIONIDPAIRLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D887450)

namespace RPG::GameCore
{
	class MissionIDPairList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MissionIDPair*>* PairList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONIDPAIRLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionIDPairList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionIDPairList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONIDPAIRLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
