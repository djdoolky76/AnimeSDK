#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVERALLOWPRIVATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB853F0)
#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVERALLOWPRIVATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB853E0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicObjectResolverAllowPrivate_TypeDefinitionIndex = 30665;

	class DynamicObjectResolverAllowPrivate : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::DynamicObjectResolverAllowPrivate** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::DynamicObjectResolverAllowPrivate**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolverAllowPrivate_TypeDefinitionIndex)->GetStaticField(0x27290);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVERALLOWPRIVATE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVERALLOWPRIVATE__CCTOR_OFFSET))();
		}
	};
}
