#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SPINE_UNITY_SKELETONRENDERER___C__DISPLAYCLASS246_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1F5C4FA0)
#define SPINE_UNITY_SKELETONRENDERER___C__DISPLAYCLASS246_0__FINDANDAPPLYSEPARATORSLOTS_B__0_OFFSET UNITYSDK_OFFSET(0x1F5C6850)

namespace Spine::Unity
{
	inline static constexpr unsigned int SkeletonRenderer___c__DisplayClass246_0_TypeDefinitionIndex = 38151;

	class SkeletonRenderer___c__DisplayClass246_0 : public ::System::Object
	{
	public:
		::System::String* startsWith; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER___C__DISPLAYCLASS246_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _FindAndApplySeparatorSlots_b__0(::System::String* slotName)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_UNITY_SKELETONRENDERER___C__DISPLAYCLASS246_0__FINDANDAPPLYSEPARATORSLOTS_B__0_OFFSET))(this, slotName);
		}
	};
}
