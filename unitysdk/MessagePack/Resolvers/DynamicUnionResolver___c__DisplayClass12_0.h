#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class UnionAttribute; }
namespace System { class Object; }
namespace System::Reflection::Emit { class ILGenerator; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBB3280)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__DISPLAYCLASS12_0__BUILDDESERIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1BBB4130)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicUnionResolver___c__DisplayClass12_0_TypeDefinitionIndex = 7267;

	class DynamicUnionResolver___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Reflection::Emit::ILGenerator* il; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Object* _BuildDeserialize_b__0(::MessagePack::UnionAttribute* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::UnionAttribute*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__DISPLAYCLASS12_0__BUILDDESERIALIZE_B__0_OFFSET))(this, a1);
		}

	};
}
