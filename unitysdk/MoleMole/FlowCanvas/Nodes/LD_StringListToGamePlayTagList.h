#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/GameplayTag.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_STRINGLISTTOGAMEPLAYTAGLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x12B40B20)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_STRINGLISTTOGAMEPLAYTAGLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x12B40CB0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_StringListToGamePlayTagList_TypeDefinitionIndex = 67452;

	class LD_StringListToGamePlayTagList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STRINGLISTTOGAMEPLAYTAGLIST__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::GameplayTag>* Invoke(::System::Collections::Generic::List_1<::System::String*>* strList)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::GameplayTag>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_STRINGLISTTOGAMEPLAYTAGLIST_INVOKE_OFFSET))(this, strList);
		}
	};
}
