#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2GETCURRAREASUDDENEVENTIDLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x180D6FF0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2GETCURRAREASUDDENEVENTIDLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x180D7340)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDAbyssS2GetCurrAreaSuddenEventIDList_TypeDefinitionIndex = 51407;

	class LDAbyssS2GetCurrAreaSuddenEventIDList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2GETCURRAREASUDDENEVENTIDLIST__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Invoke()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDABYSSS2GETCURRAREASUDDENEVENTIDLIST_INVOKE_OFFSET))(this);
		}
	};
}
