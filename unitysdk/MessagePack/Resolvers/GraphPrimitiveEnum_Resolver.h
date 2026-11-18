#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MESSAGEPACK_RESOLVERS_GRAPHPRIMITIVEENUM_RESOLVER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E404F00)
#define MESSAGEPACK_RESOLVERS_GRAPHPRIMITIVEENUM_RESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E404F40)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int GraphPrimitiveEnum_Resolver_TypeDefinitionIndex = 30528;

	class GraphPrimitiveEnum_Resolver : public ::System::Object
	{
	public:
		static ::MessagePack::Resolvers::GraphPrimitiveEnum_Resolver** StaticGet_Instance()
		{
			return (::MessagePack::Resolvers::GraphPrimitiveEnum_Resolver**)Il2CppClass::FromTypeDefinitionIndex(GraphPrimitiveEnum_Resolver_TypeDefinitionIndex)->GetStaticField(0x26540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPHPRIMITIVEENUM_RESOLVER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_GRAPHPRIMITIVEENUM_RESOLVER__CTOR_OFFSET))(this);
		}
	};
}
