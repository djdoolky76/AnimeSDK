#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace RPG
{
	inline static constexpr unsigned int LinkableNodeList_1_TypeDefinitionIndex = 6376;

	template <typename T>
	class LinkableNodeList_1 : public ::System::Object
	{
	public:
		::System::Action* PreRemoveCallback; // 0x0
		T _first; // 0x0
		T _last; // 0x0
	};
}
