#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

#define JJIBOILFBHJ_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x1C363380)
#define JJIBOILFBHJ_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x1C363410)
#define JJIBOILFBHJ_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x1C363310)
#define JJIBOILFBHJ_ONSTART_OFFSET UNITYSDK_OFFSET(0x1C3632B0)
#define JJIBOILFBHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C363370)

inline static constexpr unsigned int JJIBOILFBHJ_TypeDefinitionIndex = 83833;

class JJIBOILFBHJ : public ::JGELKBLKFHE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIBOILFBHJ__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIBOILFBHJ_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIBOILFBHJ_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIBOILFBHJ_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIBOILFBHJ_DOPGAFCKMNF_OFFSET))(this);
	}
};
