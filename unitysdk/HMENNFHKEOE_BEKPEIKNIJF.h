#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define HMENNFHKEOE_BEKPEIKNIJF_EDAGNHFIHDM_OFFSET UNITYSDK_OFFSET(0x14709870)
#define HMENNFHKEOE_BEKPEIKNIJF__CTOR_OFFSET UNITYSDK_OFFSET(0x14709860)

inline static constexpr unsigned int HMENNFHKEOE_BEKPEIKNIJF_TypeDefinitionIndex = 53318;

class HMENNFHKEOE_BEKPEIKNIJF : public ::System::Object
{
public:
	::System::String* DOIPMEDFNKH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_BEKPEIKNIJF__CTOR_OFFSET))(this);
	}

	::System::Void EDAGNHFIHDM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMENNFHKEOE_BEKPEIKNIJF_EDAGNHFIHDM_OFFSET))(this);
	}
};
