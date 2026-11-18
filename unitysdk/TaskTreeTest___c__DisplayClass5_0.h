#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DJKHNKJFMJO;
class IFBGJJPIDLA;
class TaskTreeTest;

#define TASKTREETEST___C__DISPLAYCLASS5_0__BUILDTREE_B__0_OFFSET UNITYSDK_OFFSET(0x1EBC6410)
#define TASKTREETEST___C__DISPLAYCLASS5_0__BUILDTREE_B__1_OFFSET UNITYSDK_OFFSET(0x1EBC64D0)
#define TASKTREETEST___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC6400)

inline static constexpr unsigned int TaskTreeTest___c__DisplayClass5_0_TypeDefinitionIndex = 77739;

class TaskTreeTest___c__DisplayClass5_0 : public ::System::Object
{
public:
	::TaskTreeTest* __4__this; // 0x10
	::DJKHNKJFMJO* taskTree; // 0x18
	::IFBGJJPIDLA* taskLayer; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::System::Void _BuildTree_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST___C__DISPLAYCLASS5_0__BUILDTREE_B__0_OFFSET))(this);
	}

	::System::Void _BuildTree_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST___C__DISPLAYCLASS5_0__BUILDTREE_B__1_OFFSET))(this);
	}
};
