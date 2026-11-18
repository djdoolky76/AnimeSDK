#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsEntity; }

#define DPCOLGEHDCB_DMJJEGOMBDG_BFOJKLIEDPC_OFFSET UNITYSDK_OFFSET(0x12BD8340)
#define DPCOLGEHDCB_DMJJEGOMBDG__CTOR_OFFSET UNITYSDK_OFFSET(0x12BD8330)

inline static constexpr unsigned int DPCOLGEHDCB_DMJJEGOMBDG_TypeDefinitionIndex = 64532;

class DPCOLGEHDCB_DMJJEGOMBDG : public ::System::Object
{
public:
	::Nap::NapECS::EcsEntity* KECKGDFIALJ; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_DMJJEGOMBDG__CTOR_OFFSET))(this);
	}

	::System::Void BFOJKLIEDPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPCOLGEHDCB_DMJJEGOMBDG_BFOJKLIEDPC_OFFSET))(this);
	}
};
