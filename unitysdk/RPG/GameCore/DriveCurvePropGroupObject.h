#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DriveCurvePropGroupObject; }

#define RPG_GAMECORE_DRIVECURVEPROPGROUPOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D626CB0)
#define RPG_GAMECORE_DRIVECURVEPROPGROUPOBJECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D626CC0)
#define RPG_GAMECORE_DRIVECURVEPROPGROUPOBJECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D626BF0)

namespace RPG::GameCore
{
	class DriveCurvePropGroupObject : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRIVECURVEPROPGROUPOBJECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DriveCurvePropGroupObject* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DriveCurvePropGroupObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRIVECURVEPROPGROUPOBJECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DriveCurvePropGroupObject* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DriveCurvePropGroupObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DRIVECURVEPROPGROUPOBJECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
