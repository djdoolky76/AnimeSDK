#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IADDHANFKPG;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define JDHMJPBDGLN_DBADBMLHGLH_IGAFOMMMDPM_OFFSET UNITYSDK_OFFSET(0x14FA8920)
#define JDHMJPBDGLN_DBADBMLHGLH__CTOR_OFFSET UNITYSDK_OFFSET(0x14FA8910)

inline static constexpr unsigned int JDHMJPBDGLN_DBADBMLHGLH_TypeDefinitionIndex = 83958;

class JDHMJPBDGLN_DBADBMLHGLH : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* BFDPPMDEOFF; // 0x10
	::System::Action_2<::System::Boolean, ::IADDHANFKPG*>* HOHCHEIJNNE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_DBADBMLHGLH__CTOR_OFFSET))(this);
	}

	::System::Void IGAFOMMMDPM(::System::Boolean IGAAKDOIPNN, ::IADDHANFKPG* LKEEOKHHGBN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::IADDHANFKPG*))((::PBYTE)hIl2Cpp + JDHMJPBDGLN_DBADBMLHGLH_IGAFOMMMDPM_OFFSET))(this, IGAAKDOIPNN, LKEEOKHHGBN);
	}
};
