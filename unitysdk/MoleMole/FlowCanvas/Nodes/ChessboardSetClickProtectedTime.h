#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETCLICKPROTECTEDTIME_INVOKE_OFFSET UNITYSDK_OFFSET(0x10D09A30)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETCLICKPROTECTEDTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x10D09AF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardSetClickProtectedTime_TypeDefinitionIndex = 88797;

	class ChessboardSetClickProtectedTime
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETCLICKPROTECTEDTIME__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Single overrideFirstInterval, ::System::Single overrideInterval)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDSETCLICKPROTECTEDTIME_INVOKE_OFFSET))(this, overrideFirstInterval, overrideInterval);
		}
	};
}
