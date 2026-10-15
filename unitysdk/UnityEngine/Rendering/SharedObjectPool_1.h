#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/BasicQueue.h"
namespace UnityEngine::Rendering { template <typename T> class CreateObj_1; }
namespace UnityEngine::Rendering { template <typename T> class SharedObjectPool_1; }

namespace UnityEngine::Rendering
{
	template <typename T>
	class SharedObjectPool_1 : public ::System::Object
	{
	public:
		::UnityEngine::Rendering::BasicQueue sharedQueue; // 0x0
		static ::UnityEngine::Rendering::SharedObjectPool_1<T>** StaticGet__singleton_k__BackingField()
		{
			return (::UnityEngine::Rendering::SharedObjectPool_1<T>**)UnitySDK::FromName("UnityEngine.Rendering", "SharedObjectPool`1")->GetStaticField(0x0);
		}

		static ::UnityEngine::Rendering::CreateObj_1<T>** StaticGet_m_Creator()
		{
			return (::UnityEngine::Rendering::CreateObj_1<T>**)UnitySDK::FromName("UnityEngine.Rendering", "SharedObjectPool`1")->GetStaticField(0x0);
		}

	};
}
