#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBB64F0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_TypeDefinitionIndex = 7174;

	class MessagePackPrimitives_Decoders : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_Int64JumpTable()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("MessagePack", "Decoders")->GetStaticField(0x268B0);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_UInt64JumpTable()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("MessagePack", "Decoders")->GetStaticField(0x268B8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_CCTOR_OFFSET))();
		}

	};
}
