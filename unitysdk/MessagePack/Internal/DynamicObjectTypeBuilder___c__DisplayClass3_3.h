#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MessagePack::Internal { class ObjectSerializationInfo_EmittableMember; }
namespace System { class Action; }
namespace System { class Object; }
namespace System::Reflection::Emit { class ILGenerator; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_3_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB790D0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_3__BUILDTYPE_B__3_OFFSET UNITYSDK_OFFSET(0x1BB84DB0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass3_3_TypeDefinitionIndex = 7328;

	template <typename T1, typename T2, typename T3>
	class DynamicObjectTypeBuilder___c__DisplayClass3_3 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals3; // 0x10
		::System::Reflection::Emit::ILGenerator* il; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_3_CTOR_OFFSET))(this);
		}

		::System::Action* _BuildType_b__3(::System::Int32 a1, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember* a2)
		{
			return ((::System::Action*(*)(::PVOID, ::System::Int32, ::MessagePack::Internal::ObjectSerializationInfo_EmittableMember*))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS3_3__BUILDTYPE_B__3_OFFSET))(this, a1, a2);
		}

	};
}
