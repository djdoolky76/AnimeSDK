#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_UNITY_SKELETONGRAPHIC___C__DISPLAYCLASS302_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1FDCC310)
#define SPINE_UNITY_SKELETONGRAPHIC___C__DISPLAYCLASS302_0__FINDANDAPPLYSEPARATORSLOTS_B__0_OFFSET UNITYSDK_OFFSET(0x1FDCC320)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonGraphic___c__DisplayClass302_0_TypeDefinitionIndex = 38137;

	class SkeletonGraphic___c__DisplayClass302_0 : public ::System::Object
	{
	public:
		::System::String* startsWith; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC___C__DISPLAYCLASS302_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindAndApplySeparatorSlots_b__0(::System::String* slotName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONGRAPHIC___C__DISPLAYCLASS302_0__FINDANDAPPLYSEPARATORSLOTS_B__0_OFFSET))(this, slotName);
		}
	};
}
