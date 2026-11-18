#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_CameraEffect; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA2E650)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT___C__DISPLAYCLASS4_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x1BA2E660)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_CameraEffect___c__DisplayClass4_0_TypeDefinitionIndex = 46357;

	class ConfigHollowChessboard_CameraEffect___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowChessboard_CameraEffect* __4__this; // 0x10
		::System::Action_1<::System::Object*>* endCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_CAMERAEFFECT___C__DISPLAYCLASS4_0__RUN_B__0_OFFSET))(this);
		}
	};
}
