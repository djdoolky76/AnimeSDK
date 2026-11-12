#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Resolvers { class SourceGeneratedFormatterResolver; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Reflection { class Assembly; }

#define MESSAGEPACK_RESOLVERS_SOURCEGENERATEDFORMATTERRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD5E2B0)
#define MESSAGEPACK_RESOLVERS_SOURCEGENERATEDFORMATTERRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5E2A0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int SourceGeneratedFormatterResolver_TypeDefinitionIndex = 7283;

	class SourceGeneratedFormatterResolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::SourceGeneratedFormatterResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::SourceGeneratedFormatterResolver**)UnitySDK::FromName("MessagePack.Resolvers", "SourceGeneratedFormatterResolver")->GetStaticField(0x4AEC0);
		}

		static ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Reflection::Assembly*, ::MessagePack::IFormatterResolver*>** StaticGet_AssemblyResolverCache()
		{
			return (::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Reflection::Assembly*, ::MessagePack::IFormatterResolver*>**)UnitySDK::FromName("MessagePack.Resolvers", "SourceGeneratedFormatterResolver")->GetStaticField(0x4AEC8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_SOURCEGENERATEDFORMATTERRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_SOURCEGENERATEDFORMATTERRESOLVER_CCTOR_OFFSET))();
		}

	};
}
