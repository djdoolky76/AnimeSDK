#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define GAMNBDOIIHF_AODFJHECFOG_DJJPPJMKJLF_OFFSET UNITYSDK_OFFSET(0x179C7840)
#define GAMNBDOIIHF_AODFJHECFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x179C7830)

inline static constexpr unsigned int GAMNBDOIIHF_AODFJHECFOG_TypeDefinitionIndex = 87423;

class GAMNBDOIIHF_AODFJHECFOG : public ::System::Object
{
public:
	::System::Int32 IKMDLFLGHAM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_AODFJHECFOG__CTOR_OFFSET))(this);
	}

	::System::Void DJJPPJMKJLF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAMNBDOIIHF_AODFJHECFOG_DJJPPJMKJLF_OFFSET))(this);
	}
};
