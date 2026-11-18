#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSteer.h"

class BBDCAGEKHAJ;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_BATTLE_MONOSTEERGATHER_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x18B79530)
#define MOLEMOLE_BATTLE_MONOSTEERGATHER_ONSTEERCREATE_OFFSET UNITYSDK_OFFSET(0x18B79460)
#define MOLEMOLE_BATTLE_MONOSTEERGATHER__CTOR_OFFSET UNITYSDK_OFFSET(0x18B79640)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MonoSteerGather_TypeDefinitionIndex = 47668;

	class MonoSteerGather : public ::MoleMole::MonoSteer
	{
	public:
		::System::Single strength; // 0x20
		::System::Single radius; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERGATHER__CTOR_OFFSET))(this);
		}

		::BBDCAGEKHAJ* OnSteerCreate(::MoleMole::MonoSteer* MKIGHGFHEJO, ::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::BBDCAGEKHAJ*(*)(::PVOID, ::MoleMole::MonoSteer*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERGATHER_ONSTEERCREATE_OFFSET))(this, MKIGHGFHEJO, KECKGDFIALJ);
		}

		::System::Single GetWeight(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERGATHER_GETWEIGHT_OFFSET))(this, KECKGDFIALJ);
		}
	};
}
