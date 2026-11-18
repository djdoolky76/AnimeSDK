#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class Action; }
namespace System::Reflection::Emit { class ILGenerator; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_1__BUILDTYPE_B__0_OFFSET UNITYSDK_OFFSET(0x1EA5D9B0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_1__BUILDTYPE_B__1_OFFSET UNITYSDK_OFFSET(0x1EA5DBE0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5D9A0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass3_1_TypeDefinitionIndex = 30629;

	template <typename T>
	class DynamicObjectTypeBuilder___c__DisplayClass3_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Reflection::Emit::ILGenerator* il; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_1__CTOR_OFFSET))(this);
		}

		::System::Void _BuildType_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_1__BUILDTYPE_B__0_OFFSET))(this);
		}

		::System::Action* _BuildType_b__1(::System::Int32 index, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* member)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_1__BUILDTYPE_B__1_OFFSET))(this, index, member);
		}
	};
}
