#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_INTERRUPT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8F4A00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_INTERRUPT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F4B20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SceneVideo_Interrupt_TypeDefinitionIndex = 76652;

	class LD_SceneVideo_Interrupt
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_INTERRUPT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::MoleMole::Battle::Entity* targetEntity)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SCENEVIDEO_INTERRUPT_INVOKE_OFFSET))(this, targetEntity);
		}
	};
}
