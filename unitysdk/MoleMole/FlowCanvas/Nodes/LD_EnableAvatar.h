#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENABLEAVATAR_INVOKE_OFFSET UNITYSDK_OFFSET(0x180E7D00)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ENABLEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x180E7D90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_EnableAvatar_TypeDefinitionIndex = 62599;

	class LD_EnableAvatar
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENABLEAVATAR__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ENABLEAVATAR_INVOKE_OFFSET))(this, isEnable);
		}
	};
}
