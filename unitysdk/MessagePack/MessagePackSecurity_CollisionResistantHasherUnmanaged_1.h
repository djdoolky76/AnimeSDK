#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace MessagePack
{
	template <typename T>
	class MessagePackSecurity_CollisionResistantHasherUnmanaged_1
	{
	public:
		static ::System::Object** StaticGet_Instance()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack", "CollisionResistantHasherUnmanaged`1")->GetStaticField(0x0);
		}

	};
}
