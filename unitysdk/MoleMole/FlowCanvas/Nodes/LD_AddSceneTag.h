#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ADDSCENETAG_INVOKE_OFFSET UNITYSDK_OFFSET(0x14309BB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ADDSCENETAG__CTOR_OFFSET UNITYSDK_OFFSET(0x14309C40)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AddSceneTag_TypeDefinitionIndex = 93220;

	class LD_AddSceneTag
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ADDSCENETAG__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::String*>* SceneTags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ADDSCENETAG_INVOKE_OFFSET))(this, SceneTags);
		}
	};
}
