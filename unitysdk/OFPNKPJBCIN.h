#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define OFPNKPJBCIN_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x1B7865C0)
#define OFPNKPJBCIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B7864E0)
#define OFPNKPJBCIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7864D0)

inline static constexpr unsigned int OFPNKPJBCIN_TypeDefinitionIndex = 64500;

class OFPNKPJBCIN : public ::System::Object
{
public:
	::System::Single CJLKFOGFONE; // 0x10
	::System::Int32 HPDKPILNKCH; // 0x14

	::System::Void _ctor(::System::Int32 FMJPOIFLFOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OFPNKPJBCIN__CTOR_OFFSET))(this, FMJPOIFLFOJ);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPNKPJBCIN_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFPNKPJBCIN_DPIHOJBBGLA_OFFSET))(this);
	}
};
