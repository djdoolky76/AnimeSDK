#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class MessagePackSerializer_CompiledMethods; }
namespace System { class Object; }
namespace System { class Type; }

#define MESSAGEPACK_MESSAGEPACKSERIALIZER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF59BF0)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF59C20)
#define MESSAGEPACK_MESSAGEPACKSERIALIZER___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1EF59C30)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackSerializer___c_TypeDefinitionIndex = 7240;

	class MessagePackSerializer___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MessagePack", "<>c")->GetStaticField(0x32BF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER___C_CTOR_OFFSET))(this);
		}

		::MessagePack::MessagePackSerializer_CompiledMethods* __cctor_b__42_0(::System::Type* a1)
		{
			return ((::MessagePack::MessagePackSerializer_CompiledMethods*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKSERIALIZER___C___CCTOR_B__42_0_OFFSET))(this, a1);
		}

	};
}
