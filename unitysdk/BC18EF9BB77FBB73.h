#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B88870E9FB4B8C1A/E8F306CDD5F7FC45.h"
#include "unitysdk/System/Object.h"

namespace ABC::CustomRenderPipeline { class UIAfterUIBlur; }

#define BC18EF9BB77FBB73_FD792C24FE49920B_OFFSET UNITYSDK_OFFSET(0x28267B0)
#define BC18EF9BB77FBB73__CTOR_OFFSET UNITYSDK_OFFSET(0x2826880)

inline static constexpr unsigned int BC18EF9BB77FBB73_TypeDefinitionIndex = 16860;

class BC18EF9BB77FBB73 : public ::System::Object
{
public:
	::B88870E9FB4B8C1A::E8F306CDD5F7FC45 F476B975A55CF366; // 0x10
	::System::Int32 E71794C9B34C045E; // 0x14
	::System::Int32 A18C83CD3E943627; // 0x18
	::System::Single AA8860353BDE9897; // 0x1C
	::System::Boolean A29B925F119FFEB5; // 0x20

	::System::Void _ctor(::ABC::CustomRenderPipeline::UIAfterUIBlur* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::UIAfterUIBlur*))((::PBYTE)hIl2Cpp + BC18EF9BB77FBB73__CTOR_OFFSET))(this, A567F659199E4401);
	}

	::System::Void FD792C24FE49920B(::ABC::CustomRenderPipeline::UIAfterUIBlur* A567F659199E4401)
	{
		return ((::System::Void(*)(::PVOID, ::ABC::CustomRenderPipeline::UIAfterUIBlur*))((::PBYTE)hIl2Cpp + BC18EF9BB77FBB73_FD792C24FE49920B_OFFSET))(this, A567F659199E4401);
	}
};
