#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

class HJLFJCEIMFN;
class KBDGKAJPALP;

#define HCDLPKAAPDN_OLAJNCBNDIO_OFFSET UNITYSDK_OFFSET(0x1D9B5290)
#define HCDLPKAAPDN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B5280)

inline static constexpr unsigned int HCDLPKAAPDN_TypeDefinitionIndex = 94035;

class HCDLPKAAPDN : public ::CGGLJLECNJM
{
public:
	::KBDGKAJPALP* GEEHGDABNJF; // 0x20
	::HJLFJCEIMFN* AEHMCOMLJKK; // 0x28

	::System::Void _ctor(::KBDGKAJPALP* GEEHGDABNJF)
	{
		return ((::System::Void(*)(::PVOID, ::KBDGKAJPALP*))((::PBYTE)hIl2Cpp + HCDLPKAAPDN__CTOR_OFFSET))(this, GEEHGDABNJF);
	}

	::System::Void OLAJNCBNDIO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCDLPKAAPDN_OLAJNCBNDIO_OFFSET))(this);
	}
};
