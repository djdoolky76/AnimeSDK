#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MOMLGOPPNHP;
namespace MoleMole::Battle { class Entity; }

#define MOMLGOPPNHP_MDMDPODCEMB_FDLNIEGEOLI_OFFSET UNITYSDK_OFFSET(0x131A9BA0)
#define MOMLGOPPNHP_MDMDPODCEMB__CTOR_OFFSET UNITYSDK_OFFSET(0x131A9B90)

inline static constexpr unsigned int MOMLGOPPNHP_MDMDPODCEMB_TypeDefinitionIndex = 50864;

class MOMLGOPPNHP_MDMDPODCEMB : public ::System::Object
{
public:
	::MOMLGOPPNHP* KLHPEBKNIFB; // 0x10
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_MDMDPODCEMB__CTOR_OFFSET))(this);
	}

	::System::Void FDLNIEGEOLI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMLGOPPNHP_MDMDPODCEMB_FDLNIEGEOLI_OFFSET))(this);
	}
};
