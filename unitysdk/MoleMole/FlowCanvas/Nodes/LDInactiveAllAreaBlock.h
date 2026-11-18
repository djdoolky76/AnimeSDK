#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDINACTIVEALLAREABLOCK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A7BFF70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINACTIVEALLAREABLOCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C00F0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInactiveAllAreaBlock_TypeDefinitionIndex = 79620;

	class LDInactiveAllAreaBlock
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINACTIVEALLAREABLOCK__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Int32 templateId, ::System::Int32 areaId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINACTIVEALLAREABLOCK_INVOKE_OFFSET))(this, templateId, areaId);
		}
	};
}
