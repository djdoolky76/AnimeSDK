#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8E4750)
#define MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E4A20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDActiveAreaBlock_TypeDefinitionIndex = 48036;

	class LDActiveAreaBlock
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCK__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 templateId, ::System::Int32 areaId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDACTIVEAREABLOCK_INVOKE_OFFSET))(this, templateId, areaId);
		}
	};
}
