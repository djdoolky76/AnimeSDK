#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardPlayPostEffect_Config.h"

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYPOSTEFFECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x11903F60)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYPOSTEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x119040F0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardPlayPostEffect_TypeDefinitionIndex = 46926;

	class ChessBoardPlayPostEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYPOSTEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config actionConfig)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::ChessBoardPlayPostEffect_Config))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYPOSTEFFECT_INVOKE_OFFSET))(this, actionConfig);
		}
	};
}
