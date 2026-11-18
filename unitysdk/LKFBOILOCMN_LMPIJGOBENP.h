#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

namespace MoleMole::Battle { class Entity; }

#define LKFBOILOCMN_LMPIJGOBENP_FPHNINLEEFE_OFFSET UNITYSDK_OFFSET(0x1519CBD0)
#define LKFBOILOCMN_LMPIJGOBENP__CTOR_OFFSET UNITYSDK_OFFSET(0x1519CBC0)

inline static constexpr unsigned int LKFBOILOCMN_LMPIJGOBENP_TypeDefinitionIndex = 82637;

class LKFBOILOCMN_LMPIJGOBENP : public ::System::Object
{
public:
	::System::Int32 CPCGLGIEAKN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKFBOILOCMN_LMPIJGOBENP__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle FPHNINLEEFE(::MoleMole::Battle::Entity* BDHOILPIGKB)
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + LKFBOILOCMN_LMPIJGOBENP_FPHNINLEEFE_OFFSET))(this, BDHOILPIGKB);
	}
};
