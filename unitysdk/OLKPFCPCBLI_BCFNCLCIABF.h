#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }

#define OLKPFCPCBLI_BCFNCLCIABF_PHLMCAHNDPF_OFFSET UNITYSDK_OFFSET(0x15FEBD40)
#define OLKPFCPCBLI_BCFNCLCIABF__CTOR_OFFSET UNITYSDK_OFFSET(0x15FEBD30)

inline static constexpr unsigned int OLKPFCPCBLI_BCFNCLCIABF_TypeDefinitionIndex = 70462;

class OLKPFCPCBLI_BCFNCLCIABF : public ::System::Object
{
public:
	::System::Action_3<::System::Boolean, ::System::UInt32, ::System::UInt32>* FKHOJLMBILE; // 0x10
	::System::UInt32 DFJOLNGAOAJ; // 0x18
	::System::UInt32 LEHABHCOMGH; // 0x1C
	::System::Boolean ABCNGAEFBNL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLKPFCPCBLI_BCFNCLCIABF__CTOR_OFFSET))(this);
	}

	::System::Void PHLMCAHNDPF(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OLKPFCPCBLI_BCFNCLCIABF_PHLMCAHNDPF_OFFSET))(this, PIIPCLCCOIG);
	}
};
