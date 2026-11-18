#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define MJDIJHHCCEF_MNPNEBLFBEI_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x151D8030)
#define MJDIJHHCCEF_MNPNEBLFBEI__CTOR_OFFSET UNITYSDK_OFFSET(0x151D8020)

inline static constexpr unsigned int MJDIJHHCCEF_MNPNEBLFBEI_TypeDefinitionIndex = 86972;

class MJDIJHHCCEF_MNPNEBLFBEI : public ::System::Object
{
public:
	::HOCDHMEPPEG FCHPGANOKIG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDIJHHCCEF_MNPNEBLFBEI__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJDIJHHCCEF_MNPNEBLFBEI_LIDNPLMPHAL_OFFSET))(this);
	}
};
