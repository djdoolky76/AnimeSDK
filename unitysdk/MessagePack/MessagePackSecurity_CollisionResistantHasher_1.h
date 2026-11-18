#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSecurity_CollisionResistantHasher_1_TypeDefinitionIndex = 30084;

	template <typename T>
	class MessagePackSecurity_CollisionResistantHasher_1 : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_Instance()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MessagePackSecurity_CollisionResistantHasher_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
