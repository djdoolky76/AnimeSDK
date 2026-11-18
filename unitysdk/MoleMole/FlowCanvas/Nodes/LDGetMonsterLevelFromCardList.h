#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARDLIST_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A087640)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARDLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x1A087BE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARDLIST__GETMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0x1A0877D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetMonsterLevelFromCardList_TypeDefinitionIndex = 70546;

	class LDGetMonsterLevelFromCardList
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARDLIST__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Invoke(::System::Collections::Generic::List_1<::System::Int32>* monsterCardList)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARDLIST_INVOKE_OFFSET))(this, monsterCardList);
		}

		static ::System::Int32 _GetMonsterLevel(::System::Int32 monsterCardId)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETMONSTERLEVELFROMCARDLIST__GETMONSTERLEVEL_OFFSET))(monsterCardId);
		}
	};
}
