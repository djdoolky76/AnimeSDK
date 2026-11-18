#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D080E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x10D083F0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK__CTOR_OFFSET UNITYSDK_OFFSET(0x10D08530)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x10D08550)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardOverrideIsUseJoystick_TypeDefinitionIndex = 52865;

	class ChessboardOverrideIsUseJoystick
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean setOverride, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK_INVOKE_OFFSET))(this, setOverride, value);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDOVERRIDEISUSEJOYSTICK___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
