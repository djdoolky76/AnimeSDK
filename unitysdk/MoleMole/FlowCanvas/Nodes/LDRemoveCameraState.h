#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVECAMERASTATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B3B5C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVECAMERASTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3B960)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveCameraState_TypeDefinitionIndex = 52742;

	class LDRemoveCameraState
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVECAMERASTATE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean isImmediately, ::System::String* tag, ::System::Single overrideEnterTime, ::System::String* overrideEnterCurveKey)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::String*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVECAMERASTATE_INVOKE_OFFSET))(this, isImmediately, tag, overrideEnterTime, overrideEnterCurveKey);
		}
	};
}
