#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/ST_SteerTargetType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_SteerToTarget; }

#define RPG_GAMECORE_ST_SIDE_STEERTOTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA87020)
#define RPG_GAMECORE_ST_SIDE_STEERTOTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA87030)
#define RPG_GAMECORE_ST_SIDE_STEERTOTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA86FF0)

namespace RPG::GameCore
{
	class ST_Side_SteerToTarget : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::RPG::GameCore::ST_SteerTargetType TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_STEERTOTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_SteerToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_SteerToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_STEERTOTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_SteerToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_SteerToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_STEERTOTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
