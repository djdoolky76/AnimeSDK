#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERCARDPLAYMODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8E8B20)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERCARDPLAYMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E8C60)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetMonsterCardPlayMode_TypeDefinitionIndex = 48321;

	class LDGetMonsterCardPlayMode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERCARDPLAYMODE__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERCARDPLAYMODE_INVOKE_OFFSET))(this);
		}
	};
}
