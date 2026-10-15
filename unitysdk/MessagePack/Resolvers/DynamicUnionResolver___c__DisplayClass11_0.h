#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack { class UnionAttribute; }
namespace System { class Object; }
namespace System::Reflection::Emit { class ILGenerator; }

#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__DISPLAYCLASS11_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD3A50)
#define MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__DISPLAYCLASS11_0__BUILDSERIALIZE_B__0_OFFSET UNITYSDK_OFFSET(0x1BBD4840)

namespace MessagePack::Resolvers
{
	class DynamicUnionResolver___c__DisplayClass11_0 : public ::System::Object
	{
	public:
		::System::Reflection::Emit::ILGenerator* il; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__DISPLAYCLASS11_0_CTOR_OFFSET))(this);
		}

		::System::Object* _BuildSerialize_b__0(::MessagePack::UnionAttribute* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::MessagePack::UnionAttribute*))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICUNIONRESOLVER___C__DISPLAYCLASS11_0__BUILDSERIALIZE_B__0_OFFSET))(this, a1);
		}

	};
}
