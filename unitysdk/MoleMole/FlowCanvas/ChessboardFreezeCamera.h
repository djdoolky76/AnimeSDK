#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFREEZECAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D07D00)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDFREEZECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D07F00)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardFreezeCamera_TypeDefinitionIndex = 66527;

	class ChessboardFreezeCamera
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFREEZECAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean freeze)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDFREEZECAMERA_INVOKE_OFFSET))(this, freeze);
		}
	};
}
