#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HLCKDBBPGDA;

#define KKALAHPIEGN_FKLOBBEMNDA_NCKOMFNGOKO_OFFSET UNITYSDK_OFFSET(0x18631380)
#define KKALAHPIEGN_FKLOBBEMNDA__CTOR_OFFSET UNITYSDK_OFFSET(0x18631370)

inline static constexpr unsigned int KKALAHPIEGN_FKLOBBEMNDA_TypeDefinitionIndex = 70455;

class KKALAHPIEGN_FKLOBBEMNDA : public ::System::Object
{
public:
	::System::UInt32 KDANFBEKAEG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKALAHPIEGN_FKLOBBEMNDA__CTOR_OFFSET))(this);
	}

	::System::Boolean NCKOMFNGOKO(::HLCKDBBPGDA* PEIDIOMNMJP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HLCKDBBPGDA*))((::PBYTE)hIl2Cpp + KKALAHPIEGN_FKLOBBEMNDA_NCKOMFNGOKO_OFFSET))(this, PEIDIOMNMJP);
	}
};
