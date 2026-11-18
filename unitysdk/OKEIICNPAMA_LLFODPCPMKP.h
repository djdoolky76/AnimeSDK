#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_LLFODPCPMKP_LGGGPEIEJLP_OFFSET UNITYSDK_OFFSET(0x172D1A70)
#define OKEIICNPAMA_LLFODPCPMKP_OIOCKEPNJPB_OFFSET UNITYSDK_OFFSET(0x172D1A60)
#define OKEIICNPAMA_LLFODPCPMKP__CTOR_OFFSET UNITYSDK_OFFSET(0x172D1A50)

inline static constexpr unsigned int OKEIICNPAMA_LLFODPCPMKP_TypeDefinitionIndex = 87979;

class OKEIICNPAMA_LLFODPCPMKP : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_LLFODPCPMKP__CTOR_OFFSET))(this);
	}

	::System::Void OIOCKEPNJPB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_LLFODPCPMKP_OIOCKEPNJPB_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void LGGGPEIEJLP(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_LLFODPCPMKP_LGGGPEIEJLP_OFFSET))(this, PIIPCLCCOIG);
	}
};
