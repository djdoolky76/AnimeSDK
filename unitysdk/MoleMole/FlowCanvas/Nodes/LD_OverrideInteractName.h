#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_OVERRIDEINTERACTNAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x14AE6DF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_OVERRIDEINTERACTNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x14AE6FF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_OverrideInteractName_TypeDefinitionIndex = 86253;

	class LD_OverrideInteractName
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OVERRIDEINTERACTNAME__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::EntityHandle entity, ::System::String* textMapKey)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::EntityHandle, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_OVERRIDEINTERACTNAME_INVOKE_OFFSET))(this, entity, textMapKey);
		}
	};
}
