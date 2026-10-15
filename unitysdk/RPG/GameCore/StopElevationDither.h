#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StopElevationDither; }

#define RPG_GAMECORE_STOPELEVATIONDITHER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB25540)
#define RPG_GAMECORE_STOPELEVATIONDITHER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB25550)
#define RPG_GAMECORE_STOPELEVATIONDITHER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB25500)

namespace RPG::GameCore
{
	class StopElevationDither : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsStop; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPELEVATIONDITHER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopElevationDither* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopElevationDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPELEVATIONDITHER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StopElevationDither* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StopElevationDither*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STOPELEVATIONDITHER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
