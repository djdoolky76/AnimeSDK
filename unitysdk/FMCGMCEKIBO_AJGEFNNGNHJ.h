#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCODMIJEJEP.h"
#include "unitysdk/System/Object.h"

class FMCGMCEKIBO;

#define FMCGMCEKIBO_AJGEFNNGNHJ_JPLIGBKNNAN_OFFSET UNITYSDK_OFFSET(0x11D839C0)
#define FMCGMCEKIBO_AJGEFNNGNHJ_LLOBLPABDPO_OFFSET UNITYSDK_OFFSET(0x11D83A40)
#define FMCGMCEKIBO_AJGEFNNGNHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x11D839B0)

inline static constexpr unsigned int FMCGMCEKIBO_AJGEFNNGNHJ_TypeDefinitionIndex = 47794;

class FMCGMCEKIBO_AJGEFNNGNHJ : public ::System::Object
{
public:
	::FMCGMCEKIBO* KLHPEBKNIFB; // 0x10
	::PCODMIJEJEP IGAAKDOIPNN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCGMCEKIBO_AJGEFNNGNHJ__CTOR_OFFSET))(this);
	}

	::System::Void JPLIGBKNNAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCGMCEKIBO_AJGEFNNGNHJ_JPLIGBKNNAN_OFFSET))(this);
	}

	::System::Void LLOBLPABDPO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMCGMCEKIBO_AJGEFNNGNHJ_LLOBLPABDPO_OFFSET))(this);
	}
};
