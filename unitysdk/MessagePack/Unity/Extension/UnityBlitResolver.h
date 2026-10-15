#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Unity::Extension { class UnityBlitResolver; }

#define MESSAGEPACK_UNITY_EXTENSION_UNITYBLITRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB63890)
#define MESSAGEPACK_UNITY_EXTENSION_UNITYBLITRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB63880)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int UnityBlitResolver_TypeDefinitionIndex = 10147;

	class UnityBlitResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Unity::Extension::UnityBlitResolver** StaticGet_Instance()
		{
			return (::MessagePack::Unity::Extension::UnityBlitResolver**)UnitySDK::FromName("MessagePack.Unity.Extension", "UnityBlitResolver")->GetStaticField(0x760);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_UNITYBLITRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_UNITYBLITRESOLVER_CCTOR_OFFSET))();
		}

	};
}
