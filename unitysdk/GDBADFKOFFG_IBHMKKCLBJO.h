#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGHDMEOAADG;
namespace MoleMole::Battle { class Entity; }

#define GDBADFKOFFG_IBHMKKCLBJO_PJMPKPPKFNP_OFFSET UNITYSDK_OFFSET(0x11D9C4E0)
#define GDBADFKOFFG_IBHMKKCLBJO__CTOR_OFFSET UNITYSDK_OFFSET(0x11D9C4D0)

inline static constexpr unsigned int GDBADFKOFFG_IBHMKKCLBJO_TypeDefinitionIndex = 74127;

class GDBADFKOFFG_IBHMKKCLBJO : public ::System::Object
{
public:
	::FGHDMEOAADG* DPPFJDCEIOO; // 0x10
	::MoleMole::Battle::Entity* HODAIDNDKHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_IBHMKKCLBJO__CTOR_OFFSET))(this);
	}

	::System::Void PJMPKPPKFNP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_IBHMKKCLBJO_PJMPKPPKFNP_OFFSET))(this);
	}
};
