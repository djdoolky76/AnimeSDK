#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCLOSEALLEFFECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x11903E20)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCLOSEALLEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x11903F40)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardCloseAllEffect_TypeDefinitionIndex = 81995;

	class ChessBoardCloseAllEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCLOSEALLEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCLOSEALLEFFECT_INVOKE_OFFSET))(this, index);
		}
	};
}
