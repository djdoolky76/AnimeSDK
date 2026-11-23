#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/AB87D26537D8AE29.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace ABC::CustomRenderPipeline { class ChromaticAberration; }

#define AA12D811D0C17E18_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x282E9F0)
#define AA12D811D0C17E18__CTOR_OFFSET UNITYSDK_OFFSET(0x282EB00)

inline static constexpr unsigned int AA12D811D0C17E18_TypeDefinitionIndex = 16932;

class AA12D811D0C17E18 : public ::System::Object
{
public:
	::B88870E9FB4B8C1A::AB87D26537D8AE29 F476B975A55CF366; // 0x10
	::UnityEngine::E46B881AA2636190 F44405A709E25CF6; // 0x14
	::UnityEngine::E46B881AA2636190 ABF6E5B9AF9BA296; // 0x24
	::UnityEngine::E46B881AA2636190 B13115C54915D1F7; // 0x34
	::System::Boolean E6FD541BBFDFD7E9; // 0x44
	::System::Byte _padding0[0x3];
	::System::Single ACF4238AC57D21A4; // 0x48

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::ChromaticAberration* A2C6A5A7F957F7C8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::ChromaticAberration*))((::PBYTE)hIl2Cpp + AA12D811D0C17E18_FD792C24FE49920B_OFFSET))(this, A2C6A5A7F957F7C8);
	}

	::System::Void _ctor(::ABC::CustomRenderPipeline::ChromaticAberration* A2C6A5A7F957F7C8)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::ChromaticAberration*))((::PBYTE)hIl2Cpp + AA12D811D0C17E18__CTOR_OFFSET))(this, A2C6A5A7F957F7C8);
	}
};
