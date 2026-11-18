#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATESTAGENODE_CREATESTAGE_OFFSET UNITYSDK_OFFSET(0x1190BEF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATESTAGENODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1190BC90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDCREATESTAGENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1190BF90)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDCreateStageNode_TypeDefinitionIndex = 50273;

	class LDCreateStageNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATESTAGENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::String* stageName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATESTAGENODE_INVOKE_OFFSET))(this, stageName);
		}

		::UnityEngine::GameObject* CreateStage(::System::String* prefabPath)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDCREATESTAGENODE_CREATESTAGE_OFFSET))(this, prefabPath);
		}
	};
}
