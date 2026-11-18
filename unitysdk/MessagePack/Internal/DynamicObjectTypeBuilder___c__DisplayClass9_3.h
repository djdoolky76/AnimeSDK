#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Reflection/Emit/Label.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace System { class String; }

#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_3__BUILDDESERIALIZE_B__6_OFFSET UNITYSDK_OFFSET(0x1EA5F3E0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_3__BUILDDESERIALIZE_B__7_OFFSET UNITYSDK_OFFSET(0x1EA5F5F0)
#define MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5F2D0)

namespace MessagePack::Internal
{
	inline static constexpr unsigned int DynamicObjectTypeBuilder___c__DisplayClass9_3_TypeDefinitionIndex = 30641;

	template <typename T1, typename T2, typename T3>
	class DynamicObjectTypeBuilder___c__DisplayClass9_3 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals3; // 0x10
		::System::Reflection::Emit::Label readNext; // 0x18
		::System::Reflection::Emit::Label loopEnd; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_3__CTOR_OFFSET))(this);
		}

		::System::Void _BuildDeserialize_b__6(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> x)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_3__BUILDDESERIALIZE_B__6_OFFSET))(this, x);
		}

		::System::Void _BuildDeserialize_b__7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_INTERNAL_DYNAMICOBJECTTYPEBUILDER___C__DISPLAYCLASS9_3__BUILDDESERIALIZE_B__7_OFFSET))(this);
		}
	};
}
