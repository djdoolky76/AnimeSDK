#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERAREFERENCEMOVE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7C64A0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERAREFERENCEMOVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C6A00)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetCameraReferenceMove_TypeDefinitionIndex = 74053;

	class LDSetCameraReferenceMove
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERAREFERENCEMOVE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Boolean active, ::MoleMole::Battle::Entity* refEntity, ::System::String* tag)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETCAMERAREFERENCEMOVE_INVOKE_OFFSET))(this, active, refEntity, tag);
		}
	};
}
