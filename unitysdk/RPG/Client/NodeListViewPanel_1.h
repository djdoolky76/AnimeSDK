#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
namespace RPG::Client { class PrefabLoadMeta; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace RPG::Client
{
	template <typename T>
	class NodeListViewPanel_1 : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::PrefabLoadMeta* _PrefabLoadMeta; // 0x0
		::System::Collections::Generic::List_1<T>* _NodePanelList; // 0x0
		::System::Int32 _CurCount; // 0x0
	};
}
