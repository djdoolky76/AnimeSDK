#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDENABLEACCELERATIONMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x142F1380)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDENABLEACCELERATIONMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x142F15B0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardEnableAccelerationMode_TypeDefinitionIndex = 39890;

	class ChessboardEnableAccelerationMode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDENABLEACCELERATIONMODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDENABLEACCELERATIONMODE_INVOKE_OFFSET))(this, isEnable);
		}
	};
}
