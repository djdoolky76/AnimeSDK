#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCIKBEJKPCB;
class POBMDBFNBPC;

#define POBMDBFNBPC_DMIFHEGLJPA_BNIIKIKIKED_OFFSET UNITYSDK_OFFSET(0x1C6703C0)
#define POBMDBFNBPC_DMIFHEGLJPA_LFIJAAAMFKH_OFFSET UNITYSDK_OFFSET(0x1C670340)
#define POBMDBFNBPC_DMIFHEGLJPA__CTOR_OFFSET UNITYSDK_OFFSET(0x1C670330)

inline static constexpr unsigned int POBMDBFNBPC_DMIFHEGLJPA_TypeDefinitionIndex = 39360;

class POBMDBFNBPC_DMIFHEGLJPA : public ::System::Object
{
public:
	::OCIKBEJKPCB* DICPEDGFHBH; // 0x10
	::POBMDBFNBPC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBMDBFNBPC_DMIFHEGLJPA__CTOR_OFFSET))(this);
	}

	::System::Void LFIJAAAMFKH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBMDBFNBPC_DMIFHEGLJPA_LFIJAAAMFKH_OFFSET))(this);
	}

	::System::Void BNIIKIKIKED()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBMDBFNBPC_DMIFHEGLJPA_BNIIKIKIKED_OFFSET))(this);
	}
};
