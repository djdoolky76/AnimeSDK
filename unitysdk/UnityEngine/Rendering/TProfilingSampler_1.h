#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/ProfilingSampler.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { template <typename T> class TProfilingSampler_1; }

namespace UnityEngine::Rendering
{
	template <typename T>
	class TProfilingSampler_1 : public ::UnityEngine::Rendering::ProfilingSampler
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<T, ::UnityEngine::Rendering::TProfilingSampler_1<T>*>** StaticGet_samples()
		{
			return (::System::Collections::Generic::Dictionary_2<T, ::UnityEngine::Rendering::TProfilingSampler_1<T>*>**)UnitySDK::FromName("UnityEngine.Rendering", "TProfilingSampler`1")->GetStaticField(0x0);
		}

	};
}
