#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/F9B785E1140FD828.h"

namespace UnityEngine { class AssetBundle; }

#define UNITYENGINE_B01F336837EB9669_B1777D494EF0FF2C_OFFSET UNITYSDK_OFFSET(0x4105210)
#define UNITYENGINE_B01F336837EB9669__CTOR_OFFSET UNITYSDK_OFFSET(0x16591D0)

namespace UnityEngine
{
	inline static constexpr unsigned int B01F336837EB9669_TypeDefinitionIndex = 21506;

	class B01F336837EB9669 : public ::UnityEngine::F9B785E1140FD828
	{
	public:
		::UnityEngine::AssetBundle* B1777D494EF0FF2C()
		{
			return ((::UnityEngine::AssetBundle*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_B01F336837EB9669_B1777D494EF0FF2C_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_B01F336837EB9669__CTOR_OFFSET))(this);
		}
	};
}
