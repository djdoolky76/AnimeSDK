#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }
namespace UnityEngine::Rendering { class VolumeParameter; }

namespace UnityEngine::Rendering
{
	template <typename T>
	class ObjectParameter_1
	{
	public:
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Rendering::VolumeParameter*>* _parameters_k__BackingField; // 0x0
	};
}
