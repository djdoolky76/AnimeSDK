#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::SceneMark { class SceneMarkNode; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEMARKNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x16234F30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEMARKNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x162350E0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetSceneMarkNode_TypeDefinitionIndex = 45909;

	class LDGetSceneMarkNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEMARKNODE__CTOR_OFFSET))(this);
		}

		::MoleMole::SceneMark::SceneMarkNode* Invoke(::System::String* Name)
		{
			return ((::MoleMole::SceneMark::SceneMarkNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETSCENEMARKNODE_INVOKE_OFFSET))(this, Name);
		}
	};
}
