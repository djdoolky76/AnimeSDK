#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ObjectPool_1; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int HashSetPool_1_TypeDefinitionIndex = 5981;

	template <typename T>
	class HashSetPool_1 : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>** StaticGet_s_Pool()
		{
			return (::UnityEngine::NAPRenderPipeline0::ObjectPool_1<::System::Collections::Generic::HashSet_1<T>*>**)Il2CppClass::FromTypeDefinitionIndex(HashSetPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
