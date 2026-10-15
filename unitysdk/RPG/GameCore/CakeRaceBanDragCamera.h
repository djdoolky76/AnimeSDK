#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceBanDragCamera; }

#define RPG_GAMECORE_CAKERACEBANDRAGCAMERA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54AE70)
#define RPG_GAMECORE_CAKERACEBANDRAGCAMERA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54AE80)
#define RPG_GAMECORE_CAKERACEBANDRAGCAMERA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54AE40)

namespace RPG::GameCore
{
	class CakeRaceBanDragCamera : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsBan; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBANDRAGCAMERA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceBanDragCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceBanDragCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBANDRAGCAMERA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceBanDragCamera* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceBanDragCamera*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEBANDRAGCAMERA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
