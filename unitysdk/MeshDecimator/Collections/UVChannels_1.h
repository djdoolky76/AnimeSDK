#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MeshDecimator::Collections { template <typename T> class ResizableArray_1; }

namespace MeshDecimator::Collections
{
	inline static constexpr unsigned int UVChannels_1_TypeDefinitionIndex = 35062;

	template <typename T>
	class UVChannels_1 : public ::System::Object
	{
	public:
		::Il2CppArray<::MeshDecimator::Collections::ResizableArray_1<T>*>* channels; // 0x0
		::Il2CppArray<::Il2CppArray<T>*>* channelsData; // 0x0
	};
}
