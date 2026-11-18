#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboard_BigTVMoveCameraShake; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECAMERASHAKE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19241140)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECAMERASHAKE___C__DISPLAYCLASS1_0__RUN_B__0_OFFSET UNITYSDK_OFFSET(0x19241150)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_BigTVMoveCameraShake___c__DisplayClass1_0_TypeDefinitionIndex = 46324;

	class ConfigHollowChessboard_BigTVMoveCameraShake___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigHollowChessboard_BigTVMoveCameraShake* __4__this; // 0x10
		::System::Action_1<::System::Object*>* endCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECAMERASHAKE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _Run_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHESSBOARD_BIGTVMOVECAMERASHAKE___C__DISPLAYCLASS1_0__RUN_B__0_OFFSET))(this);
		}
	};
}
