#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLOWCANVAS_NODES_NEWVECTOR3_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E7AA880)
#define FLOWCANVAS_NODES_NEWVECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AA8A0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int NewVector3_TypeDefinitionIndex = 29598;

	class NewVector3
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWVECTOR3__CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 Invoke(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_NEWVECTOR3_INVOKE_OFFSET))(this, x, y, z);
		}
	};
}
