#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DPCEONDGPMB_BLAHFGMOJKA;

#define DPCEONDGPMB_LIAHDFAOIGJ_EIIJJEINHJF_OFFSET UNITYSDK_OFFSET(0xF9A08B0)
#define DPCEONDGPMB_LIAHDFAOIGJ__CTOR_OFFSET UNITYSDK_OFFSET(0xF9A08A0)

inline static constexpr unsigned int DPCEONDGPMB_LIAHDFAOIGJ_TypeDefinitionIndex = 91704;

class DPCEONDGPMB_LIAHDFAOIGJ : public ::System::Object
{
public:
	::DPCEONDGPMB_BLAHFGMOJKA* FGBNBFHOKAA; // 0x10
	::System::Int32 JPPICPFPIEJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCEONDGPMB_LIAHDFAOIGJ__CTOR_OFFSET))(this);
	}

	::System::Boolean EIIJJEINHJF(::System::Int32 ALBNFNCECKJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DPCEONDGPMB_LIAHDFAOIGJ_EIIJJEINHJF_OFFSET))(this, ALBNFNCECKJ);
	}
};
