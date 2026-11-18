#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoTowerHolderObject; }
namespace MoleMole::Battle { class Entity; }

#define GDBADFKOFFG_GDLENJFNJLP_KPAGAGDKDNO_OFFSET UNITYSDK_OFFSET(0x116E0D30)
#define GDBADFKOFFG_GDLENJFNJLP__CTOR_OFFSET UNITYSDK_OFFSET(0x116E0D20)

inline static constexpr unsigned int GDBADFKOFFG_GDLENJFNJLP_TypeDefinitionIndex = 74139;

class GDBADFKOFFG_GDLENJFNJLP : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* HODAIDNDKHD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDBADFKOFFG_GDLENJFNJLP__CTOR_OFFSET))(this);
	}

	::System::Void KPAGAGDKDNO(::MoleMole::MonoTowerHolderObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoTowerHolderObject*))((::PBYTE)hIl2Cpp + GDBADFKOFFG_GDLENJFNJLP_KPAGAGDKDNO_OFFSET))(this, NJOAJLDJCCJ);
	}
};
