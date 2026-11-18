#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AJOGCOMAACH_JOLCINAIMCE;
namespace MoleMole::Battle { class Entity; }

#define AJOGCOMAACH_FMBENNOLIAK_LEOJHKAAEMP_OFFSET UNITYSDK_OFFSET(0x12D00AE0)
#define AJOGCOMAACH_FMBENNOLIAK__CTOR_OFFSET UNITYSDK_OFFSET(0x12D00AD0)

inline static constexpr unsigned int AJOGCOMAACH_FMBENNOLIAK_TypeDefinitionIndex = 90066;

class AJOGCOMAACH_FMBENNOLIAK : public ::System::Object
{
public:
	::AJOGCOMAACH_JOLCINAIMCE* FGBNBFHOKAA; // 0x10
	::MoleMole::Battle::Entity* AMNIHACKELI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOGCOMAACH_FMBENNOLIAK__CTOR_OFFSET))(this);
	}

	::System::Void LEOJHKAAEMP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOGCOMAACH_FMBENNOLIAK_LEOJHKAAEMP_OFFSET))(this);
	}
};
