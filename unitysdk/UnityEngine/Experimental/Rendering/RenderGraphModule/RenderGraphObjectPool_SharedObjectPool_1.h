#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Lazy_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphObjectPool_SharedObjectPool_1_TypeDefinitionIndex = 35458;

	template <typename T>
	class RenderGraphObjectPool_SharedObjectPool_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Stack_1<T>* m_Pool; // 0x0
		static ::System::Lazy_1<::System::Object*>** StaticGet_s_Instance()
		{
			return (::System::Lazy_1<::System::Object*>**)UnitySDK::FromName("UnityEngine.Experimental.Rendering.RenderGraphModule", "SharedObjectPool`1")->GetStaticField(0x0);
		}

	};
}
