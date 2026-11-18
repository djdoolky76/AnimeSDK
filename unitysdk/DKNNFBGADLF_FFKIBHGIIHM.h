#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DKNNFBGADLF;
class GCIMMDDIFBJ;

#define DKNNFBGADLF_FFKIBHGIIHM_CDGJJCOCOHK_OFFSET UNITYSDK_OFFSET(0x19416D10)
#define DKNNFBGADLF_FFKIBHGIIHM_ELJELLPCNFG_OFFSET UNITYSDK_OFFSET(0x19416CF0)
#define DKNNFBGADLF_FFKIBHGIIHM_GJGJKHLGPGA_OFFSET UNITYSDK_OFFSET(0x19416D00)
#define DKNNFBGADLF_FFKIBHGIIHM__CTOR_OFFSET UNITYSDK_OFFSET(0x19416CE0)

inline static constexpr unsigned int DKNNFBGADLF_FFKIBHGIIHM_TypeDefinitionIndex = 87545;

class DKNNFBGADLF_FFKIBHGIIHM : public ::System::Object
{
public:
	::GCIMMDDIFBJ* NPPOKNBJEIG; // 0x10
	::DKNNFBGADLF* KLHPEBKNIFB; // 0x18
	::System::Boolean HAEGLJOMJDF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNFBGADLF_FFKIBHGIIHM__CTOR_OFFSET))(this);
	}

	::System::Void ELJELLPCNFG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNFBGADLF_FFKIBHGIIHM_ELJELLPCNFG_OFFSET))(this);
	}

	::System::Boolean GJGJKHLGPGA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNFBGADLF_FFKIBHGIIHM_GJGJKHLGPGA_OFFSET))(this);
	}

	::System::Boolean CDGJJCOCOHK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DKNNFBGADLF_FFKIBHGIIHM_CDGJJCOCOHK_OFFSET))(this);
	}
};
