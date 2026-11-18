#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBAMLABJMKF;

#define PMBCJOIDAPA_PCBFGNCABEH_PKFNEHNLIMO_OFFSET UNITYSDK_OFFSET(0x1D1F3F10)
#define PMBCJOIDAPA_PCBFGNCABEH__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F3F00)

inline static constexpr unsigned int PMBCJOIDAPA_PCBFGNCABEH_TypeDefinitionIndex = 59665;

class PMBCJOIDAPA_PCBFGNCABEH : public ::System::Object
{
public:
	::System::Single BEKLCLFIDKF; // 0x10
	::System::Single JBHALLAPIJE; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBCJOIDAPA_PCBFGNCABEH__CTOR_OFFSET))(this);
	}

	::System::Void PKFNEHNLIMO(::FBAMLABJMKF* CBLGCIFLMKL)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + PMBCJOIDAPA_PCBFGNCABEH_PKFNEHNLIMO_OFFSET))(this, CBLGCIFLMKL);
	}
};
