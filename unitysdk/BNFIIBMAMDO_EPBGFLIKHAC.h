#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HLCKDBBPGDA;

#define BNFIIBMAMDO_EPBGFLIKHAC_AAGPGGLHKEA_OFFSET UNITYSDK_OFFSET(0x113FD730)
#define BNFIIBMAMDO_EPBGFLIKHAC__CTOR_OFFSET UNITYSDK_OFFSET(0x113FD720)

inline static constexpr unsigned int BNFIIBMAMDO_EPBGFLIKHAC_TypeDefinitionIndex = 80865;

class BNFIIBMAMDO_EPBGFLIKHAC : public ::System::Object
{
public:
	::HLCKDBBPGDA* PEIDIOMNMJP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_EPBGFLIKHAC__CTOR_OFFSET))(this);
	}

	::System::Boolean AAGPGGLHKEA(::HLCKDBBPGDA* DLJPLHKELCO)
	{
		return ((::System::Boolean(*)(::PVOID, ::HLCKDBBPGDA*))((::PBYTE)hIl2Cpp + BNFIIBMAMDO_EPBGFLIKHAC_AAGPGGLHKEA_OFFSET))(this, DLJPLHKELCO);
	}
};
