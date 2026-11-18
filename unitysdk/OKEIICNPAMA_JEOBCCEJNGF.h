#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AEAENLLEMDA;
class OAEFGCLEHHO;
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define OKEIICNPAMA_JEOBCCEJNGF_GDOJDALCKHN_OFFSET UNITYSDK_OFFSET(0x1B7A17A0)
#define OKEIICNPAMA_JEOBCCEJNGF_PMJEHAFEHHF_OFFSET UNITYSDK_OFFSET(0x1B7A17B0)
#define OKEIICNPAMA_JEOBCCEJNGF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A1790)

inline static constexpr unsigned int OKEIICNPAMA_JEOBCCEJNGF_TypeDefinitionIndex = 87981;

class OKEIICNPAMA_JEOBCCEJNGF : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action_1<::AEAENLLEMDA*>* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_JEOBCCEJNGF__CTOR_OFFSET))(this);
	}

	::System::Void GDOJDALCKHN(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_JEOBCCEJNGF_GDOJDALCKHN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void PMJEHAFEHHF(::OAEFGCLEHHO* JBLGEGMELPE)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_JEOBCCEJNGF_PMJEHAFEHHF_OFFSET))(this, JBLGEGMELPE);
	}
};
