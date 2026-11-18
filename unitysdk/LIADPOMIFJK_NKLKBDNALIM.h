#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LIADPOMIFJK_CMECIKGMOFI;
namespace MoleMole::Battle { class Entity; }

#define LIADPOMIFJK_NKLKBDNALIM_ODNLJLDFBAE_OFFSET UNITYSDK_OFFSET(0x15660910)
#define LIADPOMIFJK_NKLKBDNALIM__CTOR_OFFSET UNITYSDK_OFFSET(0x15660900)

inline static constexpr unsigned int LIADPOMIFJK_NKLKBDNALIM_TypeDefinitionIndex = 75097;

class LIADPOMIFJK_NKLKBDNALIM : public ::System::Object
{
public:
	::LIADPOMIFJK_CMECIKGMOFI* FGBNBFHOKAA; // 0x10
	::System::Boolean JNJLOKNBFLP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIADPOMIFJK_NKLKBDNALIM__CTOR_OFFSET))(this);
	}

	::System::Void ODNLJLDFBAE(::MoleMole::Battle::Entity* LEOKEOFNDLH)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LIADPOMIFJK_NKLKBDNALIM_ODNLJLDFBAE_OFFSET))(this, LEOKEOFNDLH);
	}
};
