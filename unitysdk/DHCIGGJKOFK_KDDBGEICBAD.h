#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DHCIGGJKOFK_KDDBGEICBAD_HCBOEAADCJH_OFFSET UNITYSDK_OFFSET(0x1A1E0770)
#define DHCIGGJKOFK_KDDBGEICBAD_MFPBDAMLBHP_OFFSET UNITYSDK_OFFSET(0x1A1E0780)
#define DHCIGGJKOFK_KDDBGEICBAD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E0760)

inline static constexpr unsigned int DHCIGGJKOFK_KDDBGEICBAD_TypeDefinitionIndex = 53305;

class DHCIGGJKOFK_KDDBGEICBAD : public ::System::Object
{
public:
	::System::Boolean BIHPFMDNFNP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCIGGJKOFK_KDDBGEICBAD__CTOR_OFFSET))(this);
	}

	::System::Boolean HCBOEAADCJH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCIGGJKOFK_KDDBGEICBAD_HCBOEAADCJH_OFFSET))(this);
	}

	::System::Boolean MFPBDAMLBHP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHCIGGJKOFK_KDDBGEICBAD_MFPBDAMLBHP_OFFSET))(this);
	}
};
