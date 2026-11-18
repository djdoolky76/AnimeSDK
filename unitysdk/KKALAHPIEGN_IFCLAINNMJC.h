#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HLCKDBBPGDA;

#define KKALAHPIEGN_IFCLAINNMJC_HFKAFMNIGIG_OFFSET UNITYSDK_OFFSET(0x129A01E0)
#define KKALAHPIEGN_IFCLAINNMJC__CTOR_OFFSET UNITYSDK_OFFSET(0x129A01D0)

inline static constexpr unsigned int KKALAHPIEGN_IFCLAINNMJC_TypeDefinitionIndex = 70453;

class KKALAHPIEGN_IFCLAINNMJC : public ::System::Object
{
public:
	::System::Int32 FFJGPKNMBBP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKALAHPIEGN_IFCLAINNMJC__CTOR_OFFSET))(this);
	}

	::System::Boolean HFKAFMNIGIG(::HLCKDBBPGDA* PEIDIOMNMJP)
	{
		return ((::System::Boolean(*)(::PVOID, ::HLCKDBBPGDA*))((::PBYTE)hIl2Cpp + KKALAHPIEGN_IFCLAINNMJC_HFKAFMNIGIG_OFFSET))(this, PEIDIOMNMJP);
	}
};
