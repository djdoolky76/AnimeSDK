#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OFFPFEPIFPH;

#define CJGMKEIIBHE_ACLPLAPKDAM_OFFSET UNITYSDK_OFFSET(0x18DDA090)
#define CJGMKEIIBHE_ALEPMMNIANO_OFFSET UNITYSDK_OFFSET(0x18DDA0A0)
#define CJGMKEIIBHE_MPFGPGGAODO_OFFSET UNITYSDK_OFFSET(0x18DDA040)
#define CJGMKEIIBHE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18DD9FC0)
#define CJGMKEIIBHE__CTOR_OFFSET UNITYSDK_OFFSET(0x18DD9FB0)

inline static constexpr unsigned int CJGMKEIIBHE_TypeDefinitionIndex = 75301;

class CJGMKEIIBHE : public ::System::Object
{
public:
	::OFFPFEPIFPH* _NEOHCKCPICJ_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGMKEIIBHE__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::CJGMKEIIBHE* LIBPKNHDIGP)
	{
		return ((::System::Void(*)(::PVOID, ::CJGMKEIIBHE*))((::PBYTE)hIl2Cpp + CJGMKEIIBHE__CTOR_1_OFFSET))(this, LIBPKNHDIGP);
	}

	::System::Void MPFGPGGAODO(::OFFPFEPIFPH* PGEBALFGJGH)
	{
		return ((::System::Void(*)(::PVOID, ::OFFPFEPIFPH*))((::PBYTE)hIl2Cpp + CJGMKEIIBHE_MPFGPGGAODO_OFFSET))(this, PGEBALFGJGH);
	}

	::System::Void ACLPLAPKDAM(::OFFPFEPIFPH* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OFFPFEPIFPH*))((::PBYTE)hIl2Cpp + CJGMKEIIBHE_ACLPLAPKDAM_OFFSET))(this, EGEGIMGMJHN);
	}

	::OFFPFEPIFPH* ALEPMMNIANO()
	{
		return ((::OFFPFEPIFPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJGMKEIIBHE_ALEPMMNIANO_OFFSET))(this);
	}
};
