#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MESSAGEPACK_UNITY_UNITYRESOLVERYRESOLVERGETFORMATTERHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x208F6EF0)
#define MESSAGEPACK_UNITY_UNITYRESOLVERYRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x208F6E30)

namespace MessagePack::Unity
{
	inline static constexpr unsigned int UnityResolveryResolverGetFormatterHelper_TypeDefinitionIndex = 10154;

	class UnityResolveryResolverGetFormatterHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>** StaticGet_FormatterMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::System::Object*>**)UnitySDK::FromName("MessagePack.Unity", "UnityResolveryResolverGetFormatterHelper")->GetStaticField(0x770);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVERYRESOLVERGETFORMATTERHELPER_CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatter(::System::RuntimeTypeHandle a1)
		{
			return ((::System::Object*(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_UNITYRESOLVERYRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET))(a1);
		}

	};
}
