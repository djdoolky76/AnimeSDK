#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITY_COLLECTIONS_NATIVELEAKDETECTION_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1F9BEFD0)

namespace Unity::Collections
{
	inline static constexpr unsigned int NativeLeakDetection_TypeDefinitionIndex = 3986;

	class NativeLeakDetection : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_s_NativeLeakDetectionMode()
		{
			return (::System::Int32*)UnitySDK::FromName("Unity.Collections", "NativeLeakDetection")->GetStaticField(0xFD0);
		}

		static ::System::Void Initialize()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_COLLECTIONS_NATIVELEAKDETECTION_INITIALIZE_OFFSET))();
		}

	};
}
