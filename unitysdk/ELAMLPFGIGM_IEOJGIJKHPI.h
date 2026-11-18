#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoEntityModelModifier; }
namespace MoleMole::Battle { class Entity; }

#define ELAMLPFGIGM_IEOJGIJKHPI_NEDAJGHFAPF_1_OFFSET UNITYSDK_OFFSET(0x1235DA80)
#define ELAMLPFGIGM_IEOJGIJKHPI_NEDAJGHFAPF_OFFSET UNITYSDK_OFFSET(0x1235D9D0)
#define ELAMLPFGIGM_IEOJGIJKHPI__CTOR_OFFSET UNITYSDK_OFFSET(0x1235D9C0)

inline static constexpr unsigned int ELAMLPFGIGM_IEOJGIJKHPI_TypeDefinitionIndex = 40913;

class ELAMLPFGIGM_IEOJGIJKHPI : public ::System::Object
{
public:
	::MoleMole::MonoEntityModelModifier* KCMHOHDDOEI; // 0x10
	::System::Int32 IEFAPMPNDDH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELAMLPFGIGM_IEOJGIJKHPI__CTOR_OFFSET))(this);
	}

	::System::Void NEDAJGHFAPF(::MoleMole::Battle::Entity* CDLJLMNHMAL)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + ELAMLPFGIGM_IEOJGIJKHPI_NEDAJGHFAPF_OFFSET))(this, CDLJLMNHMAL);
	}

	static ::System::Void NEDAJGHFAPF_1(::MoleMole::Battle::Entity* CDLJLMNHMAL, ::System::Int32 AKGHKOKPPKK, ::MoleMole::MonoEntityModelModifier* BEOFKLACFGE)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::System::Int32, ::MoleMole::MonoEntityModelModifier*))((::PBYTE)hIl2Cpp + ELAMLPFGIGM_IEOJGIJKHPI_NEDAJGHFAPF_1_OFFSET))(CDLJLMNHMAL, AKGHKOKPPKK, BEOFKLACFGE);
	}
};
