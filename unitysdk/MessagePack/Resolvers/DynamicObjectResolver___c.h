#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class DynamicAssembly; }

#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E95B850)
#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E95B890)
#define MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER___C___CCTOR_B__4_0_OFFSET UNITYSDK_OFFSET(0x1E95B8A0)

namespace MessagePack::Resolvers
{
	inline static constexpr unsigned int DynamicObjectResolver___c_TypeDefinitionIndex = 29819;

	class DynamicObjectResolver___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DynamicObjectResolver___c_TypeDefinitionIndex)->GetStaticField(0x26710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER___C__CTOR_OFFSET))(this);
		}

		::MessagePack::Internal::DynamicAssembly* __cctor_b__4_0()
		{
			return ((::MessagePack::Internal::DynamicAssembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_RESOLVERS_DYNAMICOBJECTRESOLVER___C___CCTOR_B__4_0_OFFSET))(this);
		}
	};
}
