#pragma once
#include "unitysdk/unitysdk.h"
namespace R3 { template <typename T> class Empty_1; }

namespace R3
{
	inline static constexpr unsigned int Empty_1_TypeDefinitionIndex = 35910;

	template <typename T>
	class Empty_1
	{
	public:
		static ::R3::Empty_1<T>** StaticGet_Instance()
		{
			return (::R3::Empty_1<T>**)UnitySDK::FromName("R3", "Empty`1")->GetStaticField(0x0);
		}

	};
}
