#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_CCTOR_OFFSET UNITYSDK_OFFSET(0x174D4D50)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackPrimitives_Decoders_TypeDefinitionIndex = 7185;

	class MessagePackPrimitives_Decoders : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Object*>** StaticGet_UInt64JumpTable()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("MessagePack", "Decoders")->GetStaticField(0x2F550);
		}

		static ::Il2CppArray<::System::Object*>** StaticGet_Int64JumpTable()
		{
			return (::Il2CppArray<::System::Object*>**)UnitySDK::FromName("MessagePack", "Decoders")->GetStaticField(0x2F558);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKPRIMITIVES_DECODERS_CCTOR_OFFSET))();
		}

	};
}
