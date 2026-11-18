#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AMJCFGOGENM_KDFGEBABGGC;
class FANBKJPNEDB;

#define AMJCFGOGENM_BKPIPOGMIDJ_HKJODJJLCBL_OFFSET UNITYSDK_OFFSET(0x143B92F0)
#define AMJCFGOGENM_BKPIPOGMIDJ__CTOR_OFFSET UNITYSDK_OFFSET(0x143B92E0)

inline static constexpr unsigned int AMJCFGOGENM_BKPIPOGMIDJ_TypeDefinitionIndex = 92766;

class AMJCFGOGENM_BKPIPOGMIDJ : public ::System::Object
{
public:
	::AMJCFGOGENM_KDFGEBABGGC* LJBPECKCCEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMJCFGOGENM_BKPIPOGMIDJ__CTOR_OFFSET))(this);
	}

	::System::Boolean HKJODJJLCBL(::FANBKJPNEDB* HOPLKNFEMKI)
	{
		return ((::System::Boolean(*)(::PVOID, ::FANBKJPNEDB*))((::PBYTE)hIl2Cpp + AMJCFGOGENM_BKPIPOGMIDJ_HKJODJJLCBL_OFFSET))(this, HOPLKNFEMKI);
	}
};
