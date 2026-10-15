#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }
namespace MessagePack::Resolvers { class GlobalFormatterResolver; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBB4A80)
#define MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB48F0)
#define MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER_REGISTERRESOLVER_OFFSET UNITYSDK_OFFSET(0x1BBB4930)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int GlobalFormatterResolver_TypeDefinitionIndex = 7269;

	class GlobalFormatterResolver : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MessagePack::IFormatterResolver*>* registeredResolvers; // 0x10
		static ::MessagePack::Resolvers::GlobalFormatterResolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::GlobalFormatterResolver**)UnitySDK::FromName("MessagePack.Resolvers", "GlobalFormatterResolver")->GetStaticField(0x4BDD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER_CCTOR_OFFSET))();
		}

		static ::System::Void RegisterResolver(::MessagePack::IFormatterResolver* a1)
		{
			return ((::System::Void(*)(::MessagePack::IFormatterResolver*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GLOBALFORMATTERRESOLVER_REGISTERRESOLVER_OFFSET))(a1);
		}

	};
}
