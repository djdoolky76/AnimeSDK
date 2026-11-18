#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class PEJCCBOKHCL;
namespace MoleMole::Battle { class Entity; }

#define PEJCCBOKHCL_ELJHGKALPJH_BOKHBJOJNGM_OFFSET UNITYSDK_OFFSET(0x16FA12B0)
#define PEJCCBOKHCL_ELJHGKALPJH__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA12A0)

inline static constexpr unsigned int PEJCCBOKHCL_ELJHGKALPJH_TypeDefinitionIndex = 72587;

class PEJCCBOKHCL_ELJHGKALPJH : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* MAFOMABPLOL; // 0x10
	::MoleMole::Battle::Entity* FFHNMDNPGMC; // 0x18
	::PEJCCBOKHCL* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_ELJHGKALPJH__CTOR_OFFSET))(this);
	}

	::System::Boolean BOKHBJOJNGM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + PEJCCBOKHCL_ELJHGKALPJH_BOKHBJOJNGM_OFFSET))(this, KECKGDFIALJ);
	}
};
