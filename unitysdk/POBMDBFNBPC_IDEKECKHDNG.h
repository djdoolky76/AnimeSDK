#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OCIKBEJKPCB;
class POBMDBFNBPC;

#define POBMDBFNBPC_IDEKECKHDNG_FLJKNDPICAN_OFFSET UNITYSDK_OFFSET(0x1CB5B3A0)
#define POBMDBFNBPC_IDEKECKHDNG_PFBGCADGMPK_OFFSET UNITYSDK_OFFSET(0x1CB5B430)
#define POBMDBFNBPC_IDEKECKHDNG__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5B390)

inline static constexpr unsigned int POBMDBFNBPC_IDEKECKHDNG_TypeDefinitionIndex = 39361;

class POBMDBFNBPC_IDEKECKHDNG : public ::System::Object
{
public:
	::OCIKBEJKPCB* DICPEDGFHBH; // 0x10
	::POBMDBFNBPC* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBMDBFNBPC_IDEKECKHDNG__CTOR_OFFSET))(this);
	}

	::System::Void FLJKNDPICAN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBMDBFNBPC_IDEKECKHDNG_FLJKNDPICAN_OFFSET))(this);
	}

	::System::Void PFBGCADGMPK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POBMDBFNBPC_IDEKECKHDNG_PFBGCADGMPK_OFFSET))(this);
	}
};
