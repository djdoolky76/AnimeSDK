#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

#define FGIMJHLMGNJ_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x17142850)
#define FGIMJHLMGNJ_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x171427C0)
#define FGIMJHLMGNJ_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x17142770)
#define FGIMJHLMGNJ_ONSTART_OFFSET UNITYSDK_OFFSET(0x17142730)
#define FGIMJHLMGNJ__CTOR_OFFSET UNITYSDK_OFFSET(0x171427B0)

inline static constexpr unsigned int FGIMJHLMGNJ_TypeDefinitionIndex = 50134;

class FGIMJHLMGNJ : public ::JGELKBLKFHE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIMJHLMGNJ__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIMJHLMGNJ_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIMJHLMGNJ_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIMJHLMGNJ_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGIMJHLMGNJ_CNIKAMOAANF_OFFSET))(this);
	}
};
