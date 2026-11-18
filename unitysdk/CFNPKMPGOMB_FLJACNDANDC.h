#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DMCCPINHAGM;
namespace System { class Action; }

#define CFNPKMPGOMB_FLJACNDANDC_CNCMPILOCHE_OFFSET UNITYSDK_OFFSET(0x139C4180)
#define CFNPKMPGOMB_FLJACNDANDC_MPFMPCOAMOH_OFFSET UNITYSDK_OFFSET(0x139C4190)
#define CFNPKMPGOMB_FLJACNDANDC_PGABFDLEEHM_OFFSET UNITYSDK_OFFSET(0x139C40B0)
#define CFNPKMPGOMB_FLJACNDANDC__CTOR_OFFSET UNITYSDK_OFFSET(0x139C40A0)

inline static constexpr unsigned int CFNPKMPGOMB_FLJACNDANDC_TypeDefinitionIndex = 44976;

class CFNPKMPGOMB_FLJACNDANDC : public ::System::Object
{
public:
	::DMCCPINHAGM* NLPAAJFNGFG; // 0x10
	::System::Action* NGFDBMGHFCJ; // 0x18
	::System::UInt32 PKMFBJMJCOO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_FLJACNDANDC__CTOR_OFFSET))(this);
	}

	::System::Void PGABFDLEEHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_FLJACNDANDC_PGABFDLEEHM_OFFSET))(this);
	}

	::System::Void CNCMPILOCHE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_FLJACNDANDC_CNCMPILOCHE_OFFSET))(this);
	}

	::System::Void MPFMPCOAMOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFNPKMPGOMB_FLJACNDANDC_MPFMPCOAMOH_OFFSET))(this);
	}
};
