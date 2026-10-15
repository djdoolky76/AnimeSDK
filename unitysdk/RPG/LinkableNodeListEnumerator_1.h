#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG { template <typename T> class LinkableNodeList_1; }
namespace System { class Action; }

namespace RPG
{
	template <typename T>
	class LinkableNodeListEnumerator_1 : public ::System::Object
	{
	public:
		::RPG::LinkableNodeList_1<T>* _list; // 0x0
		::System::Boolean _isFirst; // 0x0
		T _curNode; // 0x0
		::System::Action* _preRemoveCallback; // 0x0
	};
}
