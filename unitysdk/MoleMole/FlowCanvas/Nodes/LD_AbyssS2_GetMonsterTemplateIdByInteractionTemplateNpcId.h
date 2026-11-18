#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMONSTERTEMPLATEIDBYINTERACTIONTEMPLATENPCID_INVOKE_OFFSET UNITYSDK_OFFSET(0x1245CE70)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMONSTERTEMPLATEIDBYINTERACTIONTEMPLATENPCID__CTOR_OFFSET UNITYSDK_OFFSET(0x1245CFD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetMonsterTemplateIdByInteractionTemplateNpcId_TypeDefinitionIndex = 82940;

	class LD_AbyssS2_GetMonsterTemplateIdByInteractionTemplateNpcId
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMONSTERTEMPLATEIDBYINTERACTIONTEMPLATENPCID__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Boolean needOwnWeapon, ::System::Int32 interactionTemplateNpcId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETMONSTERTEMPLATEIDBYINTERACTIONTEMPLATENPCID_INVOKE_OFFSET))(this, needOwnWeapon, interactionTemplateNpcId);
		}
	};
}
