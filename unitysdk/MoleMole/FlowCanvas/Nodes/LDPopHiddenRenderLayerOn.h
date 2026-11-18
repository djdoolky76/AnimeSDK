#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPHIDDENRENDERLAYERON_INVOKE_OFFSET UNITYSDK_OFFSET(0x180DE5D0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDPOPHIDDENRENDERLAYERON__CTOR_OFFSET UNITYSDK_OFFSET(0x180DE710)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDPopHiddenRenderLayerOn_TypeDefinitionIndex = 87396;

	class LDPopHiddenRenderLayerOn
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPOPHIDDENRENDERLAYERON__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* tag)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDPOPHIDDENRENDERLAYERON_INVOKE_OFFSET))(this, tag);
		}
	};
}
