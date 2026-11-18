#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GOLJHIDGNPD;

#define IGAONHGMLLA_GKKIDOMAEHD_JAHMBHDMACP_OFFSET UNITYSDK_OFFSET(0x12EAE320)
#define IGAONHGMLLA_GKKIDOMAEHD__CTOR_OFFSET UNITYSDK_OFFSET(0x12EAE310)

inline static constexpr unsigned int IGAONHGMLLA_GKKIDOMAEHD_TypeDefinitionIndex = 49098;

class IGAONHGMLLA_GKKIDOMAEHD : public ::System::Object
{
public:
	::GOLJHIDGNPD* LHPFMGBDFPN; // 0x10
	::System::Int32 NPAKMAGBOCH; // 0x18
	::System::Int32 KJPNMJJONNO; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGAONHGMLLA_GKKIDOMAEHD__CTOR_OFFSET))(this);
	}

	::System::Void JAHMBHDMACP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGAONHGMLLA_GKKIDOMAEHD_JAHMBHDMACP_OFFSET))(this);
	}
};
