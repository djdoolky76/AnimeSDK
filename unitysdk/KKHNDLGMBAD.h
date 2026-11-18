#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FMHDMLBDIJC;

#define KKHNDLGMBAD__CTOR_OFFSET UNITYSDK_OFFSET(0x13C6D830)

inline static constexpr unsigned int KKHNDLGMBAD_TypeDefinitionIndex = 65036;

class KKHNDLGMBAD : public ::System::Object
{
public:
	::FMHDMLBDIJC* KEHECMCDLFC; // 0x10
	::FMHDMLBDIJC* BHMLIFIKCEL; // 0x18
	::System::Int32 NFACFCMFNEC; // 0x20
	::System::Int32 LMJJJMFHICC; // 0x24
	::System::Boolean EDHJLJHPENL; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHNDLGMBAD__CTOR_OFFSET))(this);
	}
};
