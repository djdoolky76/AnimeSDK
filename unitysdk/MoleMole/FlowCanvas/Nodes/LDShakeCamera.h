#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSHAKECAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8EF230)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSHAKECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8EF360)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShakeCamera_TypeDefinitionIndex = 68048;

	class LDShakeCamera
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHAKECAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* shakeKey, ::MoleMole::Battle::Entity* shakeLauncher)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSHAKECAMERA_INVOKE_OFFSET))(this, shakeKey, shakeLauncher);
		}
	};
}
