#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSHAKECAMERA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465E050)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSHAKECAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x1465E1F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInterruptShakeCamera_TypeDefinitionIndex = 56380;

	class LDInterruptShakeCamera
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSHAKECAMERA__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* shakeKey, ::MoleMole::Battle::Entity* shakeLauncher, ::System::Boolean isGlobal)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::Battle::Entity*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINTERRUPTSHAKECAMERA_INVOKE_OFFSET))(this, shakeKey, shakeLauncher, isGlobal);
		}
	};
}
