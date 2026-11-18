#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDADDAVATARGUIDEITEM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A0847C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDAVATARGUIDEITEM_TRYADDAVATARGUIDEITEM_OFFSET UNITYSDK_OFFSET(0x1A084810)
#define MOLEMOLE_FLOWCANVAS_NODES_LDADDAVATARGUIDEITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A084BF0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAddAvatarGuideItem_TypeDefinitionIndex = 38881;

	class LDAddAvatarGuideItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDAVATARGUIDEITEM__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDAVATARGUIDEITEM_INVOKE_OFFSET))(this, avatar);
		}

		static ::System::Void TryAddAvatarGuideItem(::MoleMole::Battle::Entity* avatar)
		{
			return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDADDAVATARGUIDEITEM_TRYADDAVATARGUIDEITEM_OFFSET))(avatar);
		}
	};
}
