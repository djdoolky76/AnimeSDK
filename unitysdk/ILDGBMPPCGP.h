#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NLNIIPDCABP;
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define ILDGBMPPCGP_GPFMNMJBGIA_OFFSET UNITYSDK_OFFSET(0x14A29520)
#define ILDGBMPPCGP_IAMINDLMNBC_OFFSET UNITYSDK_OFFSET(0x14A29540)
#define ILDGBMPPCGP_JLAONGEDAKK_OFFSET UNITYSDK_OFFSET(0x14A29530)
#define ILDGBMPPCGP_MNMEOKDMPCI_OFFSET UNITYSDK_OFFSET(0x14A29510)
#define ILDGBMPPCGP__CTOR_OFFSET UNITYSDK_OFFSET(0x14A29500)

inline static constexpr unsigned int ILDGBMPPCGP_TypeDefinitionIndex = 89429;

class ILDGBMPPCGP : public ::System::Object
{
public:
	::System::Func_1<::NLNIIPDCABP*>* _BLPLOCAENJC_k__BackingField; // 0x10
	::System::Action_1<::System::Boolean>* _HJMCLJHFOON_k__BackingField; // 0x18

	::System::Void _ctor(::System::Action_1<::System::Boolean>* MMEBNHIJLEN, ::System::Func_1<::NLNIIPDCABP*>* NCNEKPIDEIJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*, ::System::Func_1<::NLNIIPDCABP*>*))((::PBYTE)hIl2Cpp + ILDGBMPPCGP__CTOR_OFFSET))(this, MMEBNHIJLEN, NCNEKPIDEIJ);
	}

	::System::Action_1<::System::Boolean>* MNMEOKDMPCI()
	{
		return ((::System::Action_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDGBMPPCGP_MNMEOKDMPCI_OFFSET))(this);
	}

	::System::Void GPFMNMJBGIA(::System::Action_1<::System::Boolean>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + ILDGBMPPCGP_GPFMNMJBGIA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JLAONGEDAKK(::System::Func_1<::NLNIIPDCABP*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::NLNIIPDCABP*>*))((::PBYTE)hIl2Cpp + ILDGBMPPCGP_JLAONGEDAKK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Func_1<::NLNIIPDCABP*>* IAMINDLMNBC()
	{
		return ((::System::Func_1<::NLNIIPDCABP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDGBMPPCGP_IAMINDLMNBC_OFFSET))(this);
	}
};
