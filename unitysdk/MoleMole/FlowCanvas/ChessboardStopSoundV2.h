#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUNDV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x142F1CB0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUNDV2__CTOR_OFFSET UNITYSDK_OFFSET(0x142F1E00)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardStopSoundV2_TypeDefinitionIndex = 89052;

	class ChessboardStopSoundV2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUNDV2__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDSTOPSOUNDV2_INVOKE_OFFSET))(this, x, y);
		}
	};
}
