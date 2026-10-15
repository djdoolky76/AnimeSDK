#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine { class MaterialPropertyBlock; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHOBJECTPOOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F29BF00)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHOBJECTPOOL_GETTEMPMATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x1F2A27D0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHOBJECTPOOL_RELEASEALLTEMPALLOC_OFFSET UNITYSDK_OFFSET(0x1F29FB70)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	class RenderGraphObjectPool : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Collections::Generic::Stack_1<::System::Object*>*>* m_ArrayPool; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* m_AllocatedMaterialPropertyBlocks; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple>* m_AllocatedArrays; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHOBJECTPOOL_CTOR_OFFSET))(this);
		}

		::UnityEngine::MaterialPropertyBlock* GetTempMaterialPropertyBlock()
		{
			return ((::UnityEngine::MaterialPropertyBlock*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHOBJECTPOOL_GETTEMPMATERIALPROPERTYBLOCK_OFFSET))(this);
		}

		::System::Void ReleaseAllTempAlloc()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHOBJECTPOOL_RELEASEALLTEMPALLOC_OFFSET))(this);
		}

	};
}
