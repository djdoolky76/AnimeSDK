#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEATTACHPOINT_INVOKE_OFFSET UNITYSDK_OFFSET(0x16233A40)
#define MOLEMOLE_FLOWCANVAS_NODES_LDENABLEATTACHPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x16233C30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDEnableAttachPoint_TypeDefinitionIndex = 63579;

	class LDEnableAttachPoint
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEATTACHPOINT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* entity, ::System::String* attachPointName, ::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDENABLEATTACHPOINT_INVOKE_OFFSET))(this, entity, attachPointName, enable);
		}
	};
}
