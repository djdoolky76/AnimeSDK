#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJLOBIGIEDO.h"

namespace MoleMole { class UIInLevelCardOptionsDialogPopWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ConfigInteractEntry_SelectCard; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LOEMCCMDHGF_AINLPNNLCKG_OFFSET UNITYSDK_OFFSET(0x151AEF50)
#define LOEMCCMDHGF_CIAMODJKGJL_OFFSET UNITYSDK_OFFSET(0x151AE650)
#define LOEMCCMDHGF_LIFMBBKJECN_OFFSET UNITYSDK_OFFSET(0x151AE940)
#define LOEMCCMDHGF__CTOR_OFFSET UNITYSDK_OFFSET(0x151AEFA0)

inline static constexpr unsigned int LOEMCCMDHGF_TypeDefinitionIndex = 48026;

class LOEMCCMDHGF : public ::IJLOBIGIEDO
{
public:
	// static const ::System::String* CBLLCKNPLMF; // 0x0
	// static const ::System::Int32 DCKAFHEBNPO = -0x1; // 0x0
	// static const ::System::Int32 AEPDPOCPALG = -0x2; // 0x0
	::MoleMole::Config::ConfigInteractEntry_SelectCard* AHMFPFACACD; // 0x50
	::MoleMole::UIInLevelCardOptionsDialogPopWindowController* MGHHHLNOFPB; // 0x58
	::System::Boolean LJFCDAIEIIO; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOEMCCMDHGF__CTOR_OFFSET))(this);
	}

	::System::Boolean CIAMODJKGJL(::MoleMole::Battle::Entity* KEEENBHLHPL, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LOEMCCMDHGF_CIAMODJKGJL_OFFSET))(this, KEEENBHLHPL, DJHFOGHIFEJ);
	}

	::System::Void AINLPNNLCKG(::System::Collections::Generic::List_1<::System::String*>* DJLOKMMLFJC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + LOEMCCMDHGF_AINLPNNLCKG_OFFSET))(this, DJLOKMMLFJC);
	}

	::System::Boolean LIFMBBKJECN(::MoleMole::Battle::Entity* KEEENBHLHPL, ::MoleMole::Battle::Entity* DJHFOGHIFEJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LOEMCCMDHGF_LIFMBBKJECN_OFFSET))(this, KEEENBHLHPL, DJHFOGHIFEJ);
	}
};
