#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASHAKE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4A6C70)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASHAKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A6EC0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardCameraShake_TypeDefinitionIndex = 84689;

	class ChessboardCameraShake
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASHAKE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* cameraShakeKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDCAMERASHAKE_INVOKE_OFFSET))(this, cameraShakeKey);
		}
	};
}
