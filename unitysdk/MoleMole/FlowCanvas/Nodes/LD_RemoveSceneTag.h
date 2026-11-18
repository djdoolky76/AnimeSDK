#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVESCENETAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x1357A690)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVESCENETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x1357A720)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_RemoveSceneTag_TypeDefinitionIndex = 51279;

	class LD_RemoveSceneTag
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVESCENETAG__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::String*>* SceneTags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_REMOVESCENETAG_INVOKE_OFFSET))(this, SceneTags);
		}
	};
}
