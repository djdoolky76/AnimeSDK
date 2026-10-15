#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

namespace MessagePack
{
	template <typename T1, typename T2>
	class MessagePackSecurity_CollisionResistantEnumHasher_2 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_Instance()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack", "CollisionResistantEnumHasher`2")->GetStaticField(0x0);
		}

	};
}
