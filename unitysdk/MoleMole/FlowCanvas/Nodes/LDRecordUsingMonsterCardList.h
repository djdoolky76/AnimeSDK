#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARDLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x11910030)
#define MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARDLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x119102A0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDRecordUsingMonsterCardList_TypeDefinitionIndex = 50772;

	class LDRecordUsingMonsterCardList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARDLIST__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::Collections::Generic::List_1<::System::Int32>* monsterCardIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDRECORDUSINGMONSTERCARDLIST_INVOKE_OFFSET))(this, monsterCardIds);
		}
	};
}
