#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/F7C63FD12203AD82.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class DOF; }

#define F325E30BDA261900_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x2782070)
#define F325E30BDA261900__CTOR_OFFSET UNITYSDK_OFFSET(0x2782280)

inline static constexpr unsigned int F325E30BDA261900_TypeDefinitionIndex = 16550;

class F325E30BDA261900 : public ::System::Object
{
public:
	::System::Boolean A57F80F3CC65A496; // 0x10
	::System::Byte _padding0[0x3];
	::System::Single AB4662C683474782; // 0x14
	::System::Single A028C475F480B9A8; // 0x18
	::System::Single F2F583C375E17384; // 0x1C
	::System::Single E4B0673896F0EC2C; // 0x20
	::System::Single A6BFEA3A38577C2E; // 0x24
	::System::Single BABDB6AA13BA51CA; // 0x28
	::System::Int32 E1D6561BCF0F81E7; // 0x2C
	::System::Int32 A1887CD54C23EB9A; // 0x30
	::System::Single BBFFDA668A161D15; // 0x34
	::System::Single B337C6C1E6B10828; // 0x38
	::System::Single B078BDCE24849414; // 0x3C
	::B88870E9FB4B8C1A::F7C63FD12203AD82 B37885BF35F107D9; // 0x40

	::System::Void _ctor(::ABC::CustomRenderPipeline::DOF* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::DOF*))((::PBYTE)hIl2Cpp + F325E30BDA261900__CTOR_OFFSET))(this, A567F659199E4401);
	}

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::DOF* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::DOF*))((::PBYTE)hIl2Cpp + F325E30BDA261900_FD792C24FE49920B_OFFSET))(this, A567F659199E4401);
	}
};
