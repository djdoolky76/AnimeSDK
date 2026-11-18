#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Data
{
	inline static constexpr unsigned int RBTree_1_TreePage_TypeDefinitionIndex = 37329;

	template <typename T>
	class RBTree_1_TreePage : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _slots; // 0x0
		::Il2CppArray<::System::Int32>* _slotMap; // 0x0
		::System::Int32 _inUseCount; // 0x0
		::System::Int32 _pageId; // 0x0
		::System::Int32 _nextFreeSlotLine; // 0x0
	};
}
