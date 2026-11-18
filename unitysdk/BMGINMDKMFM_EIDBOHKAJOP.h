#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define BMGINMDKMFM_EIDBOHKAJOP_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1425CEF0)
#define BMGINMDKMFM_EIDBOHKAJOP__CTOR_OFFSET UNITYSDK_OFFSET(0x1425CEE0)

inline static constexpr unsigned int BMGINMDKMFM_EIDBOHKAJOP_TypeDefinitionIndex = 55274;

class BMGINMDKMFM_EIDBOHKAJOP : public ::System::Object
{
public:
	::HOCDHMEPPEG PABLEDCGDGM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGINMDKMFM_EIDBOHKAJOP__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGINMDKMFM_EIDBOHKAJOP_LIDNPLMPHAL_OFFSET))(this);
	}
};
