#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessboardCameraStretch_ParaInfo.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASTRETCH_INVOKE_OFFSET UNITYSDK_OFFSET(0x13562A00)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASTRETCH__CTOR_OFFSET UNITYSDK_OFFSET(0x13562D80)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardCameraStretch_TypeDefinitionIndex = 59489;

	class ChessboardCameraStretch
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASTRETCH__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo info)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ChessboardCameraStretch_ParaInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASTRETCH_INVOKE_OFFSET))(this, info);
		}
	};
}
