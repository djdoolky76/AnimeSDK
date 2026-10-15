#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class IFormatterResolver; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Reflection { class Assembly; }

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int SourceGeneratedFormatterResolver_FormatterCache_1___c_TypeDefinitionIndex = 7274;

	template <typename T>
	class SourceGeneratedFormatterResolver_FormatterCache_1___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack.Resolvers", "<>c")->GetStaticField(0x0);
		}

		static ::System::Func_2<::System::Reflection::Assembly*, ::MessagePack::IFormatterResolver*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Reflection::Assembly*, ::MessagePack::IFormatterResolver*>**)UnitySDK::FromName("MessagePack.Resolvers", "<>c")->GetStaticField(0x0);
		}

	};
}
