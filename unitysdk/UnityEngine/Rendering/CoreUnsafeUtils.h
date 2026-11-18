#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMBINEHASHES_1_OFFSET UNITYSDK_OFFSET(0x1D06A560)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMPAREHASHES_1_OFFSET UNITYSDK_OFFSET(0x1D06A530)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_HAVEDUPLICATES_OFFSET UNITYSDK_OFFSET(0x1D06A570)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x1D06A4C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CoreUnsafeUtils_TypeDefinitionIndex = 17814;

	class CoreUnsafeUtils : public ::System::Object
	{
	public:
		static ::System::Void QuickSort(::Il2CppArray<::System::UInt32>* arr, ::System::Int32 left, ::System::Int32 right)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET))(arr, left, right);
		}

		static ::System::Int32 CompareHashes_1(::System::Int32 oldHashCount, ::PVOID oldHashes, ::System::Int32 newHashCount, ::PVOID newHashes, ::PVOID addIndices, ::PVOID removeIndices, ::System::Int32& addCount, ::System::Int32& remCount)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID, ::System::Int32, ::PVOID, ::PVOID, ::PVOID, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMPAREHASHES_1_OFFSET))(oldHashCount, oldHashes, newHashCount, newHashes, addIndices, removeIndices, addCount, remCount);
		}

		static ::System::Void CombineHashes_1(::System::Int32 count, ::PVOID hashes, ::PVOID outHash)
		{
			return ((::System::Void(*)(::System::Int32, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMBINEHASHES_1_OFFSET))(count, hashes, outHash);
		}

		static ::System::Boolean HaveDuplicates(::Il2CppArray<::System::Int32>* arr)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_HAVEDUPLICATES_OFFSET))(arr);
		}
	};
}
