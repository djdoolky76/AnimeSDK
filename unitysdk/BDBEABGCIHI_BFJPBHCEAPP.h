#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BMBMBLDFBID.h"

class JEPHFHPHAIB;

#define BDBEABGCIHI_BFJPBHCEAPP_EOGBGMPIAKJ_OFFSET UNITYSDK_OFFSET(0x1267FBB0)
#define BDBEABGCIHI_BFJPBHCEAPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1267FBA0)

inline static constexpr unsigned int BDBEABGCIHI_BFJPBHCEAPP_TypeDefinitionIndex = 80501;

class BDBEABGCIHI_BFJPBHCEAPP : public ::System::Object
{
public:
	::JEPHFHPHAIB* IJEGAGBCCKK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBEABGCIHI_BFJPBHCEAPP__CTOR_OFFSET))(this);
	}

	::System::Void EOGBGMPIAKJ(::BMBMBLDFBID HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::BMBMBLDFBID))((::PBYTE)hIl2Cpp + BDBEABGCIHI_BFJPBHCEAPP_EOGBGMPIAKJ_OFFSET))(this, HFMHOELKCAJ);
	}
};
