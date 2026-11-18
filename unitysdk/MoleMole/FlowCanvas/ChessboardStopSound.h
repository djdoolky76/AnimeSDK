#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUND_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B308B0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x12B309F0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardStopSound_TypeDefinitionIndex = 68025;

	class ChessboardStopSound
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUND__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUND_INVOKE_OFFSET))(this, index);
		}
	};
}
