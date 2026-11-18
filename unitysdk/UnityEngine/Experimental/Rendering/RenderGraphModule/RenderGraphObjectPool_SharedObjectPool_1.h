#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Lazy_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphObjectPool_SharedObjectPool_1_TypeDefinitionIndex = 17803;

	template <typename T>
	class RenderGraphObjectPool_SharedObjectPool_1 : public ::System::Object
	{
	public:
		static ::System::Lazy_1<::System::Object*>** StaticGet_s_Instance()
		{
			return (::System::Lazy_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(RenderGraphObjectPool_SharedObjectPool_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Collections::Generic::Stack_1<T>* m_Pool; // 0x0
	};
}
