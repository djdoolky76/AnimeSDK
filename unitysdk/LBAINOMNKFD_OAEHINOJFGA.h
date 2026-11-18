#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BKPAAAODNIA;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define LBAINOMNKFD_OAEHINOJFGA_JECPLPPOBJG_OFFSET UNITYSDK_OFFSET(0x15235600)
#define LBAINOMNKFD_OAEHINOJFGA_KJHBPBDGKDP_OFFSET UNITYSDK_OFFSET(0x15235670)
#define LBAINOMNKFD_OAEHINOJFGA__CTOR_OFFSET UNITYSDK_OFFSET(0x152355F0)

inline static constexpr unsigned int LBAINOMNKFD_OAEHINOJFGA_TypeDefinitionIndex = 53380;

class LBAINOMNKFD_OAEHINOJFGA : public ::System::Object
{
public:
	::System::Action_1<::BKPAAAODNIA*>* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBAINOMNKFD_OAEHINOJFGA__CTOR_OFFSET))(this);
	}

	::System::Void JECPLPPOBJG(::OAEFGCLEHHO* DJCNCELJPOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LBAINOMNKFD_OAEHINOJFGA_JECPLPPOBJG_OFFSET))(this, DJCNCELJPOM);
	}

	::System::Void KJHBPBDGKDP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + LBAINOMNKFD_OAEHINOJFGA_KJHBPBDGKDP_OFFSET))(this, PIIPCLCCOIG);
	}
};
