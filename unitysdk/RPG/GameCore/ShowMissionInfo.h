#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowMissionInfo; }

#define RPG_GAMECORE_SHOWMISSIONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAE1CD0)
#define RPG_GAMECORE_SHOWMISSIONINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAE1CE0)
#define RPG_GAMECORE_SHOWMISSIONINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAE1CA0)

namespace RPG::GameCore
{
	class ShowMissionInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SubMissionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMISSIONINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMissionInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMissionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMISSIONINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowMissionInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowMissionInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWMISSIONINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
