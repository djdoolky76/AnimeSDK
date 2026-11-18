#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSteer.h"

class BBDCAGEKHAJ;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_BATTLE_MONOSTEERRVO_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C5AB980)
#define MOLEMOLE_BATTLE_MONOSTEERRVO_ONSTEERCREATE_OFFSET UNITYSDK_OFFSET(0x1C5AB8C0)
#define MOLEMOLE_BATTLE_MONOSTEERRVO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5ABA90)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MonoSteerRVO_TypeDefinitionIndex = 45629;

	class MonoSteerRVO : public ::MoleMole::MonoSteer
	{
	public:
		::System::Single strength; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERRVO__CTOR_OFFSET))(this);
		}

		::BBDCAGEKHAJ* OnSteerCreate(::MoleMole::MonoSteer* MKIGHGFHEJO, ::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::BBDCAGEKHAJ*(*)(::PVOID, ::MoleMole::MonoSteer*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERRVO_ONSTEERCREATE_OFFSET))(this, MKIGHGFHEJO, KECKGDFIALJ);
		}

		::System::Single GetWeight(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERRVO_GETWEIGHT_OFFSET))(this, KECKGDFIALJ);
		}
	};
}
