#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEAVATARGUIDEITEM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8EE9C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEAVATARGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8EEBF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRemoveAvatarGuideItem_TypeDefinitionIndex = 61539;

	class LDRemoveAvatarGuideItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEAVATARGUIDEITEM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDREMOVEAVATARGUIDEITEM_INVOKE_OFFSET))(this, avatar);
		}
	};
}
