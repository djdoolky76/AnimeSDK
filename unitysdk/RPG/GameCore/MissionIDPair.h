#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MissionIDPair; }

#define RPG_GAMECORE_MISSIONIDPAIR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D887440)
#define RPG_GAMECORE_MISSIONIDPAIR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D887330)

namespace RPG::GameCore
{
	class MissionIDPair : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MainMissionID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* SubMissionIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONIDPAIR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MissionIDPair* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MissionIDPair*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MISSIONIDPAIR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
