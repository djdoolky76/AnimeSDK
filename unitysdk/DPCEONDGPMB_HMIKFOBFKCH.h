#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPCEONDGPMB_LIAHDFAOIGJ;

#define DPCEONDGPMB_HMIKFOBFKCH_EFHFDFFKOEG_OFFSET UNITYSDK_OFFSET(0x10610C70)
#define DPCEONDGPMB_HMIKFOBFKCH__CTOR_OFFSET UNITYSDK_OFFSET(0x10610C60)

inline static constexpr unsigned int DPCEONDGPMB_HMIKFOBFKCH_TypeDefinitionIndex = 91700;

class DPCEONDGPMB_HMIKFOBFKCH : public ::System::Object
{
public:
	::DPCEONDGPMB_LIAHDFAOIGJ* EEMOEMFLABI; // 0x10
	::System::Int32 BEGKDHMKNGH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCEONDGPMB_HMIKFOBFKCH__CTOR_OFFSET))(this);
	}

	::System::Boolean EFHFDFFKOEG(::System::Int32 ALBNFNCECKJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPCEONDGPMB_HMIKFOBFKCH_EFHFDFFKOEG_OFFSET))(this, ALBNFNCECKJ);
	}
};
