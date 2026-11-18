#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LDMJMKLIGCN_HMMDIEPJLMC_HCDMMJLJLAL_OFFSET UNITYSDK_OFFSET(0x1683D650)
#define LDMJMKLIGCN_HMMDIEPJLMC_KBAFCIJONFJ_OFFSET UNITYSDK_OFFSET(0x1683D660)
#define LDMJMKLIGCN_HMMDIEPJLMC__CTOR_OFFSET UNITYSDK_OFFSET(0x1683D430)

inline static constexpr unsigned int LDMJMKLIGCN_HMMDIEPJLMC_TypeDefinitionIndex = 90785;

class LDMJMKLIGCN_HMMDIEPJLMC : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMJMKLIGCN_HMMDIEPJLMC__CTOR_OFFSET))(this);
	}

	::System::Void HCDMMJLJLAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMJMKLIGCN_HMMDIEPJLMC_HCDMMJLJLAL_OFFSET))(this);
	}

	::System::Void KBAFCIJONFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDMJMKLIGCN_HMMDIEPJLMC_KBAFCIJONFJ_OFFSET))(this);
	}
};
