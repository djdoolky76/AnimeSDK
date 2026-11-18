#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJOGCOMAACH_JMPOGJHMKCD;
namespace MoleMole::Battle { class Entity; }

#define AJOGCOMAACH_HDAGNLCKFJG_CAGJOPAEOHO_OFFSET UNITYSDK_OFFSET(0x144E3B30)
#define AJOGCOMAACH_HDAGNLCKFJG__CTOR_OFFSET UNITYSDK_OFFSET(0x144E3B20)

inline static constexpr unsigned int AJOGCOMAACH_HDAGNLCKFJG_TypeDefinitionIndex = 90064;

class AJOGCOMAACH_HDAGNLCKFJG : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* AMNIHACKELI; // 0x10
	::AJOGCOMAACH_JMPOGJHMKCD* FGBNBFHOKAA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOGCOMAACH_HDAGNLCKFJG__CTOR_OFFSET))(this);
	}

	::System::Void CAGJOPAEOHO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOGCOMAACH_HDAGNLCKFJG_CAGJOPAEOHO_OFFSET))(this);
	}
};
