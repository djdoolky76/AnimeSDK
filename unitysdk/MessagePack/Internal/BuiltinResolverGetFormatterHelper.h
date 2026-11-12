#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MESSAGEPACK_INTERNAL_BUILTINRESOLVERGETFORMATTERHELPER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD10510)
#define MESSAGEPACK_INTERNAL_BUILTINRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET UNITYSDK_OFFSET(0x1CD10100)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int BuiltinResolverGetFormatterHelper_TypeDefinitionIndex = 7319;

	class BuiltinResolverGetFormatterHelper : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_FormatterMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("MessagePack.Internal", "BuiltinResolverGetFormatterHelper")->GetStaticField(0x48390);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BUILTINRESOLVERGETFORMATTERHELPER_CCTOR_OFFSET))();
		}

		static ::System::Object* GetFormatter(::System::Type* a1)
		{
			return ((::System::Object*(*)(::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_BUILTINRESOLVERGETFORMATTERHELPER_GETFORMATTER_OFFSET))(a1);
		}

	};
}
