#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Unity::Extension { class UnityBlitWithPrimitiveArrayResolver; }

#define MESSAGEPACK_UNITY_EXTENSION_UNITYBLITWITHPRIMITIVEARRAYRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB43670)
#define MESSAGEPACK_UNITY_EXTENSION_UNITYBLITWITHPRIMITIVEARRAYRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB43660)

namespace MessagePack::Unity::Extension
{
	inline static constexpr unsigned int UnityBlitWithPrimitiveArrayResolver_TypeDefinitionIndex = 10149;

	class UnityBlitWithPrimitiveArrayResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Unity::Extension::UnityBlitWithPrimitiveArrayResolver** StaticGet_Instance()
		{
			return (::MessagePack::Unity::Extension::UnityBlitWithPrimitiveArrayResolver**)UnitySDK::FromName("MessagePack.Unity.Extension", "UnityBlitWithPrimitiveArrayResolver")->GetStaticField(0x780);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_UNITYBLITWITHPRIMITIVEARRAYRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_UNITY_EXTENSION_UNITYBLITWITHPRIMITIVEARRAYRESOLVER_CCTOR_OFFSET))();
		}

	};
}
