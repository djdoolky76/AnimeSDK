#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class MessagePackObjectAttribute; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicObjectResolver___c__7_1_TypeDefinitionIndex = 7260;

	template <typename T>
	class DynamicObjectResolver___c__7_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack.Resolvers", "<>c__7`1")->GetStaticField(0x0);
		}

		static ::System::Func_2<::MessagePack::MessagePackObjectAttribute*, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::MessagePack::MessagePackObjectAttribute*, ::System::Boolean>**)UnitySDK::FromName("MessagePack.Resolvers", "<>c__7`1")->GetStaticField(0x0);
		}

	};
}
