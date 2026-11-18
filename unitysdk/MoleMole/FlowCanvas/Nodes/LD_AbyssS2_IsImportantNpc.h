#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISIMPORTANTNPC_INVOKE_OFFSET UNITYSDK_OFFSET(0x14666C00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISIMPORTANTNPC__CTOR_OFFSET UNITYSDK_OFFSET(0x14666DC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_IsImportantNpc_TypeDefinitionIndex = 73000;

	class LD_AbyssS2_IsImportantNpc
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISIMPORTANTNPC__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::MoleMole::Battle::Entity* targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_ISIMPORTANTNPC_INVOKE_OFFSET))(this, targetEntity);
		}
	};
}
