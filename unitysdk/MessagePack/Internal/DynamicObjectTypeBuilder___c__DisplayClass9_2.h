#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class AutomataDictionary; }
namespace System::Reflection::Emit { class LocalBuilder; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_2__BUILDDESERIALIZE_B__5_OFFSET UNITYSDK_OFFSET(0x1EA5EFE0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5EFD0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass9_2_TypeDefinitionIndex = 30631;

	template <typename T1, typename T2>
	class DynamicObjectTypeBuilder___c__DisplayClass9_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::MessagePack::Internal::AutomataDictionary* automata; // 0x18
		::System::Reflection::Emit::LocalBuilder* longKey; // 0x20
		::System::Reflection::Emit::LocalBuilder* buffer; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_2__CTOR_OFFSET))(this);
		}

		::System::Void _BuildDeserialize_b__5(::System::Reflection::Emit::LocalBuilder* forILocal)
		{
			return ((::System::Void(*)(::PVOID, ::System::Reflection::Emit::LocalBuilder*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_2__BUILDDESERIALIZE_B__5_OFFSET))(this, forILocal);
		}
	};
}
