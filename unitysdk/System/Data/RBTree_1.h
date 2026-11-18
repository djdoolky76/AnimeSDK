#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/TreeAccessMethod.h"
#include "unitysdk/System/Object.h"

namespace System::Data
{
	inline static constexpr unsigned int RBTree_1_TypeDefinitionIndex = 37325;

	template <typename T>
	class RBTree_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _pageTable; // 0x0
		::Il2CppArray<::System::Int32>* _pageTableMap; // 0x0
		::System::Int32 _inUsePageCount; // 0x0
		::System::Int32 _nextFreePageLine; // 0x0
		::System::Int32 root; // 0x0
		::System::Int32 _version; // 0x0
		::System::Int32 _inUseNodeCount; // 0x0
		::System::Int32 _inUseSatelliteTreeCount; // 0x0
		::System::Data::TreeAccessMethod _accessMethod; // 0x0
	};
}
