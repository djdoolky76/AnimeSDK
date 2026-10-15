#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_CollisionResistantHasherUnmanaged_1_TypeDefinitionIndex = 7203;

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
