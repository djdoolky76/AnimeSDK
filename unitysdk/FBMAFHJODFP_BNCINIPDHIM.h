#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBMAFHJODFP;

#define FBMAFHJODFP_BNCINIPDHIM_MFPHKHIDHFO_OFFSET UNITYSDK_OFFSET(0x142831A0)
#define FBMAFHJODFP_BNCINIPDHIM__CTOR_OFFSET UNITYSDK_OFFSET(0x14283190)

inline static constexpr unsigned int FBMAFHJODFP_BNCINIPDHIM_TypeDefinitionIndex = 76177;

class FBMAFHJODFP_BNCINIPDHIM : public ::System::Object
{
public:
	::FBMAFHJODFP* KLHPEBKNIFB; // 0x10
	::System::Int32 BAJCHFHALOA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMAFHJODFP_BNCINIPDHIM__CTOR_OFFSET))(this);
	}

	::System::Void MFPHKHIDHFO(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FBMAFHJODFP_BNCINIPDHIM_MFPHKHIDHFO_OFFSET))(this, ABHBKFJKINO);
	}
};
