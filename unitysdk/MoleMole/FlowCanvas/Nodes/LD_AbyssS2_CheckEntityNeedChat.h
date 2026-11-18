#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CHECKENTITYNEEDCHAT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A091150)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CHECKENTITYNEEDCHAT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A091200)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_CheckEntityNeedChat_TypeDefinitionIndex = 48685;

	class LD_AbyssS2_CheckEntityNeedChat
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CHECKENTITYNEEDCHAT__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CHECKENTITYNEEDCHAT_INVOKE_OFFSET))(this, targetEntity);
		}
	};
}
