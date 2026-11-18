#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CFMGIKJLMBJ;
class OAEFGCLEHHO;
namespace System { template <typename T> class Action_1; }

#define GPOJGBOMBKJ_CFPELPCDGKP_BDGDPHJNIHP_OFFSET UNITYSDK_OFFSET(0x18169170)
#define GPOJGBOMBKJ_CFPELPCDGKP_MDGKGAPOAJL_OFFSET UNITYSDK_OFFSET(0x18169110)
#define GPOJGBOMBKJ_CFPELPCDGKP__CTOR_OFFSET UNITYSDK_OFFSET(0x18169100)

inline static constexpr unsigned int GPOJGBOMBKJ_CFPELPCDGKP_TypeDefinitionIndex = 46920;

class GPOJGBOMBKJ_CFPELPCDGKP : public ::System::Object
{
public:
	::System::Action_1<::CFMGIKJLMBJ*>* OIPJFHJAKLA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_CFPELPCDGKP__CTOR_OFFSET))(this);
	}

	::System::Void MDGKGAPOAJL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_CFPELPCDGKP_MDGKGAPOAJL_OFFSET))(this, BHDNBGLCNOM);
	}

	::System::Void BDGDPHJNIHP(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + GPOJGBOMBKJ_CFPELPCDGKP_BDGDPHJNIHP_OFFSET))(this, BHDNBGLCNOM);
	}
};
