#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define AAGFHPANKIA_CCMNEJJJGNC_OFFSET UNITYSDK_OFFSET(0x17C91980)
#define AAGFHPANKIA_FHDJDIIPGGP_OFFSET UNITYSDK_OFFSET(0x17C91AF0)
#define AAGFHPANKIA_OGOACMJKKHG_OFFSET UNITYSDK_OFFSET(0x17C91C80)
#define AAGFHPANKIA_OPMEIOLJIPC_OFFSET UNITYSDK_OFFSET(0x17C91D30)

inline static constexpr unsigned int AAGFHPANKIA_TypeDefinitionIndex = 78024;

class AAGFHPANKIA : public ::System::Object
{
public:
	static ::System::Boolean CCMNEJJJGNC(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AAGFHPANKIA_CCMNEJJJGNC_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Double FHDJDIIPGGP(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* KEKFPKKIIFB)
	{
		return ((::System::Double(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + AAGFHPANKIA_FHDJDIIPGGP_OFFSET))(KECKGDFIALJ, KEKFPKKIIFB);
	}

	static ::System::Single OGOACMJKKHG(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* IJHDPHMIOIH, ::System::String* DCCNFPPKEDK)
	{
		return ((::System::Single(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + AAGFHPANKIA_OGOACMJKKHG_OFFSET))(KECKGDFIALJ, IJHDPHMIOIH, DCCNFPPKEDK);
	}

	static ::System::Int32 OPMEIOLJIPC(::MoleMole::Battle::Entity* KECKGDFIALJ, ::System::String* KEKFPKKIIFB)
	{
		return ((::System::Int32(*)(::MoleMole::Battle::Entity*, ::System::String*))((::PBYTE)hIl2Cpp + AAGFHPANKIA_OPMEIOLJIPC_OFFSET))(KECKGDFIALJ, KEKFPKKIIFB);
	}
};
