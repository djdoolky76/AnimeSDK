#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OBKNEEOLOPB;
class OFABBAJJIBL;

#define NAKJFHEKABA_ADDJFJJDJFP_OFFSET UNITYSDK_OFFSET(0x12C36130)
#define NAKJFHEKABA_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x12C364C0)
#define NAKJFHEKABA_PLCJGDLLPHM_OFFSET UNITYSDK_OFFSET(0x12C360F0)
#define NAKJFHEKABA__CTOR_OFFSET UNITYSDK_OFFSET(0x12C35F50)

inline static constexpr unsigned int NAKJFHEKABA_TypeDefinitionIndex = 51400;

class NAKJFHEKABA : public ::System::Object
{
public:
	::OBKNEEOLOPB* EKHAPLAFMCB; // 0x10
	::OFABBAJJIBL* PKHIICGPKEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKJFHEKABA__CTOR_OFFSET))(this);
	}

	::System::Void PLCJGDLLPHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKJFHEKABA_PLCJGDLLPHM_OFFSET))(this);
	}

	::System::Boolean ADDJFJJDJFP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKJFHEKABA_ADDJFJJDJFP_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKJFHEKABA_BJANDJKKNCD_OFFSET))(this);
	}
};
