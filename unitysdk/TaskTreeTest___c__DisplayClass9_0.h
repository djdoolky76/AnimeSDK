#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FJMFECAAPHD;

#define TASKTREETEST___C__DISPLAYCLASS9_0__BUILDTASK_B__0_OFFSET UNITYSDK_OFFSET(0x1D647DD0)
#define TASKTREETEST___C__DISPLAYCLASS9_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D647DC0)

inline static constexpr unsigned int TaskTreeTest___c__DisplayClass9_0_TypeDefinitionIndex = 77740;

class TaskTreeTest___c__DisplayClass9_0 : public ::System::Object
{
public:
	::FJMFECAAPHD* task; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST___C__DISPLAYCLASS9_0__CTOR_OFFSET))(this);
	}

	::System::Void _BuildTask_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TASKTREETEST___C__DISPLAYCLASS9_0__BUILDTASK_B__0_OFFSET))(this);
	}
};
