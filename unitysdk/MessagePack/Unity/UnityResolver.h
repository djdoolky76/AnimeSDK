#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }

#define MESSAGEPACK_UNITY_UNITYRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB68280)
#define MESSAGEPACK_UNITY_UNITYRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB68270)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int UnityResolver_TypeDefinitionIndex = 10142;

	class UnityResolver : public ::System::Object
	{
	public:
		static ::MessagePack::IFormatterResolver** StaticGet_InstanceWithStandardResolver()
		{
			return (::MessagePack::IFormatterResolver**)UnitySDK::FromName("MessagePack.Unity", "UnityResolver")->GetStaticField(0x7A0);
		}

		static ::MessagePack::IFormatterResolver** StaticGet_Instance()
		{
			return (::MessagePack::IFormatterResolver**)UnitySDK::FromName("MessagePack.Unity", "UnityResolver")->GetStaticField(0x7A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVER_CCTOR_OFFSET))();
		}

	};
}
