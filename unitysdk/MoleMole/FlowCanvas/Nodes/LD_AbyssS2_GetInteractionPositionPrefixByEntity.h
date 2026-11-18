#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINTERACTIONPOSITIONPREFIXBYENTITY_INVOKE_OFFSET UNITYSDK_OFFSET(0x14666A90)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINTERACTIONPOSITIONPREFIXBYENTITY__CTOR_OFFSET UNITYSDK_OFFSET(0x14666BE0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetInteractionPositionPrefixByEntity_TypeDefinitionIndex = 72689;

	class LD_AbyssS2_GetInteractionPositionPrefixByEntity
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINTERACTIONPOSITIONPREFIXBYENTITY__CTOR_OFFSET))(this);
		}

		::System::String* Invoke(::MoleMole::Battle::Entity* targetEntity, ::System::Int32 interactionPool)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETINTERACTIONPOSITIONPREFIXBYENTITY_INVOKE_OFFSET))(this, targetEntity, interactionPool);
		}
	};
}
