#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITYV2_INVOKE_OFFSET UNITYSDK_OFFSET(0x11909C10)
#define MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITYV2__CTOR_OFFSET UNITYSDK_OFFSET(0x11909DD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int CreateHollowEntityV2_TypeDefinitionIndex = 39334;

	class CreateHollowEntityV2
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITYV2__CTOR_OFFSET))(this);
		}

		::System::UInt32 Invoke(::System::Int32 entityID, ::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CREATEHOLLOWENTITYV2_INVOKE_OFFSET))(this, entityID, x, y);
		}
	};
}
