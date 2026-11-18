#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CIOJDGJGAJM_HHMHAJDGOMP_DFLCPKNGHLN_OFFSET UNITYSDK_OFFSET(0x193D7BC0)
#define CIOJDGJGAJM_HHMHAJDGOMP__CTOR_OFFSET UNITYSDK_OFFSET(0x193D7BB0)

inline static constexpr unsigned int CIOJDGJGAJM_HHMHAJDGOMP_TypeDefinitionIndex = 80593;

class CIOJDGJGAJM_HHMHAJDGOMP : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Int32 HBINAGPODHA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_HHMHAJDGOMP__CTOR_OFFSET))(this);
	}

	::System::Void DFLCPKNGHLN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOJDGJGAJM_HHMHAJDGOMP_DFLCPKNGHLN_OFFSET))(this);
	}
};
