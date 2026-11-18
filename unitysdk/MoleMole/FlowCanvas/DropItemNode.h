#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas { class SimpleItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_DROPITEMNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x13563910)
#define MOLEMOLE_FLOWCANVAS_DROPITEMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x13563960)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int DropItemNode_TypeDefinitionIndex = 89160;

	class DropItemNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DROPITEMNODE__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::SimpleItem*>* randomItems, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::SimpleItem*>* conditionItems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::SimpleItem*>*, ::System::Collections::Generic::List_1<::MoleMole::FlowCanvas::SimpleItem*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_DROPITEMNODE_INVOKE_OFFSET))(this, randomItems, conditionItems);
		}
	};
}
