#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OOIJIDMLIAC_KECFMCHAINP;
namespace MoleMole::Battle { class Entity; }

#define OOIJIDMLIAC_EFGDFNOEBMF_IBIFAMFEDJD_OFFSET UNITYSDK_OFFSET(0x12956D10)
#define OOIJIDMLIAC_EFGDFNOEBMF__CTOR_OFFSET UNITYSDK_OFFSET(0x12956D00)

inline static constexpr unsigned int OOIJIDMLIAC_EFGDFNOEBMF_TypeDefinitionIndex = 70885;

class OOIJIDMLIAC_EFGDFNOEBMF : public ::System::Object
{
public:
	::OOIJIDMLIAC_KECFMCHAINP* EEMOEMFLABI; // 0x10
	::MoleMole::Battle::Entity* HODAIDNDKHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_EFGDFNOEBMF__CTOR_OFFSET))(this);
	}

	::System::Boolean IBIFAMFEDJD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOIJIDMLIAC_EFGDFNOEBMF_IBIFAMFEDJD_OFFSET))(this);
	}
};
