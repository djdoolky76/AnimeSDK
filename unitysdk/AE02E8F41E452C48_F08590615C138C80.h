#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Confirm_E18B39FBD22EF1C5.h"
#include "unitysdk/System/Object.h"

class AE02E8F41E452C48;
namespace System { class String; }

#define AE02E8F41E452C48_F08590615C138C80_BBD8B6D3A113E5EB_OFFSET UNITYSDK_OFFSET(0x3AC8CE0)
#define AE02E8F41E452C48_F08590615C138C80__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AE02E8F41E452C48_F08590615C138C80_TypeDefinitionIndex = 12096;

class AE02E8F41E452C48_F08590615C138C80 : public ::System::Object
{
public:
	::AE02E8F41E452C48* A544919C800E2923; // 0x10
	::System::String* BD7F81C4BAB71679; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE02E8F41E452C48_F08590615C138C80__CTOR_OFFSET))(this);
	}

	::System::Void BBD8B6D3A113E5EB(::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5 E82293C0814051A5)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Confirm_E18B39FBD22EF1C5))((::PBYTE)hIl2Cpp + AE02E8F41E452C48_F08590615C138C80_BBD8B6D3A113E5EB_OFFSET))(this, E82293C0814051A5);
	}
};
