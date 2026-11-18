#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DOFIMCNIHEH;

#define IKJAIGFECFP_GPMBPKIDAMD_HIHJLFFDHHC_OFFSET UNITYSDK_OFFSET(0x1B88DEE0)
#define IKJAIGFECFP_GPMBPKIDAMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B88DED0)

inline static constexpr unsigned int IKJAIGFECFP_GPMBPKIDAMD_TypeDefinitionIndex = 15947;

class IKJAIGFECFP_GPMBPKIDAMD : public ::System::Object
{
public:
	::System::Int32 KIMNOKAKJDF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJAIGFECFP_GPMBPKIDAMD__CTOR_OFFSET))(this);
	}

	::System::Boolean HIHJLFFDHHC(::DOFIMCNIHEH* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::DOFIMCNIHEH*))((::PBYTE)hIl2Cpp + IKJAIGFECFP_GPMBPKIDAMD_HIHJLFFDHHC_OFFSET))(this, HAAEBCOBKFF);
	}
};
