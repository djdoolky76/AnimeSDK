#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERABASENODE_INITCAMERABASE_OFFSET UNITYSDK_OFFSET(0x1A8E8E80)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERABASENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A8E8EC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERABASENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8E8F30)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDInitCameraBaseNode_TypeDefinitionIndex = 54937;

	class LDInitCameraBaseNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERABASENODE__CTOR_OFFSET))(this);
		}

		::System::Void InitCameraBase()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERABASENODE_INITCAMERABASE_OFFSET))(this);
		}

		::System::Boolean Invoke()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDINITCAMERABASENODE_INVOKE_OFFSET))(this);
		}
	};
}
