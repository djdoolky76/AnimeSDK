#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_MuteVision; }

#define RPG_GAMECORE_ST_SIDE_MUTEVISION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA85630)
#define RPG_GAMECORE_ST_SIDE_MUTEVISION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA85640)
#define RPG_GAMECORE_ST_SIDE_MUTEVISION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA85600)

namespace RPG::GameCore
{
	class ST_Side_MuteVision : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::Single Duration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEVISION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_MuteVision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_MuteVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEVISION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_MuteVision* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_MuteVision*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_MUTEVISION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
