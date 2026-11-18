#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETREVIVEHPRATIO_INVOKE_OFFSET UNITYSDK_OFFSET(0x1041E4E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SETREVIVEHPRATIO__CTOR_OFFSET UNITYSDK_OFFSET(0x1041E640)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SetReviveHpRatio_TypeDefinitionIndex = 65369;

	class LD_SetReviveHpRatio
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETREVIVEHPRATIO__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Single HPRatio, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SETREVIVEHPRATIO_INVOKE_OFFSET))(this, HPRatio, index);
		}
	};
}
