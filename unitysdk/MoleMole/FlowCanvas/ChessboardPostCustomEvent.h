#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPOSTCUSTOMEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4A78F0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPOSTCUSTOMEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4A7B40)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPostCustomEvent_TypeDefinitionIndex = 87193;

	class ChessboardPostCustomEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPOSTCUSTOMEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* triggerName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPOSTCUSTOMEVENT_INVOKE_OFFSET))(this, triggerName);
		}
	};
}
