#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define EKAJOLMBGLM_CNNCCBPLMHB_BBADEMOBAND_OFFSET UNITYSDK_OFFSET(0x169A1A80)
#define EKAJOLMBGLM_CNNCCBPLMHB__CTOR_OFFSET UNITYSDK_OFFSET(0x169A1A70)

inline static constexpr unsigned int EKAJOLMBGLM_CNNCCBPLMHB_TypeDefinitionIndex = 59246;

class EKAJOLMBGLM_CNNCCBPLMHB : public ::System::Object
{
public:
	::System::Action* FGHOIDFGJHB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAJOLMBGLM_CNNCCBPLMHB__CTOR_OFFSET))(this);
	}

	::System::Void BBADEMOBAND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKAJOLMBGLM_CNNCCBPLMHB_BBADEMOBAND_OFFSET))(this);
	}
};
