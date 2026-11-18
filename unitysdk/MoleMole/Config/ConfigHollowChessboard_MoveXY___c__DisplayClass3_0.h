#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_MoveXY; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_MOVEXY___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1929F360)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_MOVEXY___C__DISPLAYCLASS3_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x1929F370)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_MoveXY___c__DisplayClass3_0_TypeDefinitionIndex = 46365;

	class ConfigHollowChessboard_MoveXY___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowChessboard_MoveXY* __4__this; // 0x10
		::System::Action_1<::System::Object*>* endCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_MOVEXY___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_MOVEXY___C__DISPLAYCLASS3_0__RUN_B__0_OFFSET))(this);
		}
	};
}
