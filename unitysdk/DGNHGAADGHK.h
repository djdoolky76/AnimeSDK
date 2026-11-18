#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DGNHGAADGHK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E06C0)

inline static constexpr unsigned int DGNHGAADGHK_TypeDefinitionIndex = 70131;

class DGNHGAADGHK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNHGAADGHK__CTOR_OFFSET))(this);
	}
};
