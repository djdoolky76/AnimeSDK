#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;

#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_2__CTOR_OFFSET UNITYSDK_OFFSET(0x13242770)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_2__PUSH_B__0_OFFSET UNITYSDK_OFFSET(0x13242780)
#define FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_2__PUSH_B__1_OFFSET UNITYSDK_OFFSET(0x13242910)

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GroupVariableHelper___c__DisplayClass15_2_TypeDefinitionIndex = 41713;

	template <typename T1, typename T2>
	class GroupVariableHelper___c__DisplayClass15_2 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals2; // 0x10
		::System::UInt32 groupID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_2__CTOR_OFFSET))(this);
		}

		::System::Void _Push_b__0(::OAEFGCLEHHO* message)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_2__PUSH_B__0_OFFSET))(this, message);
		}

		::System::Void _Push_b__1(::OAEFGCLEHHO* message)
		{
			return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + FOUNDATION_VIEWOBJECT_GROUPVARIABLEHELPER___C__DISPLAYCLASS15_2__PUSH_B__1_OFFSET))(this, message);
		}
	};
}
