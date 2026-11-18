#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOFCAHPDLFF_IGJOINDLIIM_GGFFKPIPKLC_OFFSET UNITYSDK_OFFSET(0x1217C8B0)
#define MOFCAHPDLFF_IGJOINDLIIM_MNPBEJGIDDJ_OFFSET UNITYSDK_OFFSET(0x1217C8A0)
#define MOFCAHPDLFF_IGJOINDLIIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1217C890)

inline static constexpr unsigned int MOFCAHPDLFF_IGJOINDLIIM_TypeDefinitionIndex = 68520;

class MOFCAHPDLFF_IGJOINDLIIM : public ::System::Object
{
public:
	::System::Boolean PCIEHDPJIDE; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFCAHPDLFF_IGJOINDLIIM__CTOR_OFFSET))(this);
	}

	::System::Void MNPBEJGIDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFCAHPDLFF_IGJOINDLIIM_MNPBEJGIDDJ_OFFSET))(this);
	}

	::System::Boolean GGFFKPIPKLC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOFCAHPDLFF_IGJOINDLIIM_GGFFKPIPKLC_OFFSET))(this);
	}
};
