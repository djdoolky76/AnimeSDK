#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSteer.h"

class BBDCAGEKHAJ;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_BATTLE_MONOSTEERNEAR_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x11E678F0)
#define MOLEMOLE_BATTLE_MONOSTEERNEAR_ONSTEERCREATE_OFFSET UNITYSDK_OFFSET(0x11E677F0)
#define MOLEMOLE_BATTLE_MONOSTEERNEAR__CTOR_OFFSET UNITYSDK_OFFSET(0x11E67A00)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MonoSteerNear_TypeDefinitionIndex = 48191;

	class MonoSteerNear : public ::MoleMole::MonoSteer
	{
	public:
		::System::Single maxDistance; // 0x20
		::System::Single strength; // 0x24
		::System::Single minDistance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERNEAR__CTOR_OFFSET))(this);
		}

		::BBDCAGEKHAJ* OnSteerCreate(::MoleMole::MonoSteer* MKIGHGFHEJO, ::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::BBDCAGEKHAJ*(*)(::PVOID, ::MoleMole::MonoSteer*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERNEAR_ONSTEERCREATE_OFFSET))(this, MKIGHGFHEJO, KECKGDFIALJ);
		}

		::System::Single GetWeight(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERNEAR_GETWEIGHT_OFFSET))(this, KECKGDFIALJ);
		}
	};
}
