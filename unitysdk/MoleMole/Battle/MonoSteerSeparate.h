#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSteer.h"

class BBDCAGEKHAJ;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_BATTLE_MONOSTEERSEPARATE_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x13044F40)
#define MOLEMOLE_BATTLE_MONOSTEERSEPARATE_ONSTEERCREATE_OFFSET UNITYSDK_OFFSET(0x13044E60)
#define MOLEMOLE_BATTLE_MONOSTEERSEPARATE__CTOR_OFFSET UNITYSDK_OFFSET(0x13045050)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MonoSteerSeparate_TypeDefinitionIndex = 62910;

	class MonoSteerSeparate : public ::MoleMole::MonoSteer
	{
	public:
		::System::Single strength; // 0x20
		::System::Single radius; // 0x24
		::System::Single distance; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERSEPARATE__CTOR_OFFSET))(this);
		}

		::BBDCAGEKHAJ* OnSteerCreate(::MoleMole::MonoSteer* MKIGHGFHEJO, ::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::BBDCAGEKHAJ*(*)(::PVOID, ::MoleMole::MonoSteer*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERSEPARATE_ONSTEERCREATE_OFFSET))(this, MKIGHGFHEJO, KECKGDFIALJ);
		}

		::System::Single GetWeight(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERSEPARATE_GETWEIGHT_OFFSET))(this, KECKGDFIALJ);
		}
	};
}
