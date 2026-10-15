#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Reflection { class FieldInfo; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_2_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBA5580)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_2__BUILDTYPE_B__2_OFFSET UNITYSDK_OFFSET(0x1BBA5590)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass3_2_TypeDefinitionIndex = 7327;

	template <typename T1, typename T2>
	class DynamicObjectTypeBuilder___c__DisplayClass3_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::System::Reflection::FieldInfo* fi; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_2_CTOR_OFFSET))(this);
		}

		::System::Void _BuildType_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_2__BUILDTYPE_B__2_OFFSET))(this);
		}

	};
}
