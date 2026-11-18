#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::ViewObject::Container { template <typename T> class SimpleClusterArray_1; }

namespace Foundation::ViewObject::Container
{
	inline static constexpr unsigned int TSparseList_1_TypeDefinitionIndex = 86329;

	template <typename T>
	class TSparseList_1 : public ::System::Object
	{
	public:
		::System::Object* CustomCreator; // 0x0
		::System::Object* CustomDeleter; // 0x0
		::System::Int32 _capacity_k__BackingField; // 0x0
		::Foundation::ViewObject::Container::SimpleClusterArray_1<::System::Object*>* _internalData; // 0x0
		::System::Int32 _firstFreeIndex; // 0x0
		::System::Int32 _freeCount; // 0x0
		::System::Int32 _currentCheckNumber; // 0x0
	};
}
