#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIIAKLNMAIF.h"

#define FNMHAAPNCFC__CTOR_OFFSET UNITYSDK_OFFSET(0x15EFB820)

inline static constexpr unsigned int FNMHAAPNCFC_TypeDefinitionIndex = 46544;

class FNMHAAPNCFC : public ::GIIAKLNMAIF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNMHAAPNCFC__CTOR_OFFSET))(this);
	}
};
