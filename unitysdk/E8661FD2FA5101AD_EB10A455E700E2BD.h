#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Threading { class E3E5DF04DCFE6819; }

#define E8661FD2FA5101AD_EB10A455E700E2BD_AC5C9E62FFDE6CC6_OFFSET UNITYSDK_OFFSET(0x3F24070)
#define E8661FD2FA5101AD_EB10A455E700E2BD__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAECF0)

inline static constexpr unsigned int E8661FD2FA5101AD_EB10A455E700E2BD_TypeDefinitionIndex = 19870;

struct alignas(8) E8661FD2FA5101AD_EB10A455E700E2BD
{
	::System::Threading::E3E5DF04DCFE6819* E04D2BE64FCE9814; // 0x10
	::System::Object* E5EB06E4FD2C32F7; // 0x18

	::System::Void _ctor(::System::Threading::E3E5DF04DCFE6819* E04D2BE64FCE9814, ::System::Object* E5EB06E4FD2C32F7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Threading::E3E5DF04DCFE6819*, ::System::Object*))((::PBYTE)hIl2Cpp + E8661FD2FA5101AD_EB10A455E700E2BD__CTOR_OFFSET))(this, E04D2BE64FCE9814, E5EB06E4FD2C32F7);
	}

	::System::Void AC5C9E62FFDE6CC6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8661FD2FA5101AD_EB10A455E700E2BD_AC5C9E62FFDE6CC6_OFFSET))(this);
	}
};
