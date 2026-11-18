#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JHGOELBFJNE;

#define JELNECMCEIO_JFEDBBBMOFC_OFFSET UNITYSDK_OFFSET(0x14A5E850)
#define JELNECMCEIO__CTOR_OFFSET UNITYSDK_OFFSET(0x14A5E810)

inline static constexpr unsigned int JELNECMCEIO_TypeDefinitionIndex = 68205;

class JELNECMCEIO : public ::System::Object
{
public:
	::JHGOELBFJNE* LPHMMCCHFNF; // 0x10

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JELNECMCEIO__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	::JHGOELBFJNE* JFEDBBBMOFC()
	{
		return ((::JHGOELBFJNE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JELNECMCEIO_JFEDBBBMOFC_OFFSET))(this);
	}
};
