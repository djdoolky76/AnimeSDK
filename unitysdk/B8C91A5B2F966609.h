#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class TemporalAASettings; }

#define B8C91A5B2F966609_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x28252B0)
#define B8C91A5B2F966609__CTOR_OFFSET UNITYSDK_OFFSET(0x2825420)

inline static constexpr unsigned int B8C91A5B2F966609_TypeDefinitionIndex = 16874;

class B8C91A5B2F966609 : public ::System::Object
{
public:
	::System::Single A437B5E17C9978DB; // 0x10
	::System::Single E1A5B12A9DB51770; // 0x14
	::System::Single FC30A59ECA4CFAA1; // 0x18
	::System::Boolean F6E0F0129E1CDD55; // 0x1C
	::System::Byte _padding0[0x3];
	::System::Single F76114D1970C4CF3; // 0x20
	::System::Single E5664829D3CE58C1; // 0x24
	::System::Single A77B3AB2F5DF8FA0; // 0x28
	::System::Single AF7CCBA9386527DD; // 0x2C
	::System::Single B1794DF4D20396B5; // 0x30

	::System::Void _ctor(::ABC::CustomRenderPipeline::TemporalAASettings* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::TemporalAASettings*))((::PBYTE)hIl2Cpp + B8C91A5B2F966609__CTOR_OFFSET))(this, A567F659199E4401);
	}

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::TemporalAASettings* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::TemporalAASettings*))((::PBYTE)hIl2Cpp + B8C91A5B2F966609_FD792C24FE49920B_OFFSET))(this, A567F659199E4401);
	}
};
