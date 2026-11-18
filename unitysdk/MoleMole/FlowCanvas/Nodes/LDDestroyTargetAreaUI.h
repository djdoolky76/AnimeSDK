#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETAREAUI_INVOKE_OFFSET UNITYSDK_OFFSET(0x1465BB60)
#define MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETAREAUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1465BDC0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDDestroyTargetAreaUI_TypeDefinitionIndex = 49569;

	class LDDestroyTargetAreaUI
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* paramList; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETAREAUI__CTOR_OFFSET))(this);
		}

		::System::Boolean Invoke(::System::Collections::Generic::List_1<::System::String*>* AnchorList)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDDESTROYTARGETAREAUI_INVOKE_OFFSET))(this, AnchorList);
		}
	};
}
