#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINEINTERNAL_MATHFINTERNAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F414190)

namespace UnityEngineInternal
{
	inline static constexpr unsigned int MathfInternal_TypeDefinitionIndex = 3918;

	struct alignas(4) MathfInternal
	{
		static ::System::Boolean* StaticGet_IsFlushToZeroEnabled()
		{
			return (::System::Boolean*)UnitySDK::FromName("UnityEngineInternal", "MathfInternal")->GetStaticField(0x3A50);
		}

		static ::System::Single* StaticGet_FloatMinNormal()
		{
			return (::System::Single*)UnitySDK::FromName("UnityEngineInternal", "MathfInternal")->GetStaticField(0x3A54);
		}

		static ::System::Single* StaticGet_FloatMinDenormal()
		{
			return (::System::Single*)UnitySDK::FromName("UnityEngineInternal", "MathfInternal")->GetStaticField(0x3A58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_MATHFINTERNAL_CCTOR_OFFSET))();
		}

	};
}
