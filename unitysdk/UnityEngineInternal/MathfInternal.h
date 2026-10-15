#pragma once
#include "unitysdk/unitysdk.h"

#define UNITYENGINEINTERNAL_MATHFINTERNAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F441FC0)

namespace UnityEngineInternal
{
	struct alignas(4) MathfInternal
	{
		static ::System::Single* StaticGet_FloatMinNormal()
		{
			return (::System::Single*)UnitySDK::FromName("UnityEngineInternal", "MathfInternal")->GetStaticField(0x4000);
		}

		static ::System::Boolean* StaticGet_IsFlushToZeroEnabled()
		{
			return (::System::Boolean*)UnitySDK::FromName("UnityEngineInternal", "MathfInternal")->GetStaticField(0x4004);
		}

		static ::System::Single* StaticGet_FloatMinDenormal()
		{
			return (::System::Single*)UnitySDK::FromName("UnityEngineInternal", "MathfInternal")->GetStaticField(0x4008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_MATHFINTERNAL_CCTOR_OFFSET))();
		}

	};
}
