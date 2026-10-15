#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMBINEHASHES_1_OFFSET UNITYSDK_OFFSET(0x1F2AECF0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMPAREHASHES_1_OFFSET UNITYSDK_OFFSET(0x1F2AECC0)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_HAVEDUPLICATES_OFFSET UNITYSDK_OFFSET(0x1F2AED00)
#define UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET UNITYSDK_OFFSET(0x1F2AEC90)

namespace UnityEngine::Rendering
{
	class CoreUnsafeUtils : public ::System::Object
	{
	public:
		static ::System::Void QuickSort(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_QUICKSORT_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CompareHashes_1(::System::Int32 a1, ::PVOID a2, ::System::Int32 a3, ::PVOID a4, ::PVOID a5, ::PVOID a6, ::System::Int32 a7, ::System::Int32 a8)
		{
			return ((::System::Int32(*)(::System::Int32, ::PVOID, ::System::Int32, ::PVOID, ::PVOID, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMPAREHASHES_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void CombineHashes_1(::System::Int32 a1, ::PVOID a2, ::PVOID a3)
		{
			return ((::System::Void(*)(::System::Int32, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_COMBINEHASHES_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean HaveDuplicates(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_COREUNSAFEUTILS_HAVEDUPLICATES_OFFSET))(a1);
		}

	};
}
