#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviour.h"

namespace SRF::Components
{
	inline static constexpr unsigned int SRSingleton_1_TypeDefinitionIndex = 35433;

	template <typename T>
	class SRSingleton_1 : public ::SRF::SRMonoBehaviour
	{
	public:
		static T* StaticGet__instance()
		{
			return (T*)UnitySDK::FromName("SRF.Components", "SRSingleton`1")->GetStaticField(0x0);
		}

	};
}
