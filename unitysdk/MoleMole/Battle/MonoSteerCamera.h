#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoSteer.h"

class BBDCAGEKHAJ;
namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_BATTLE_MONOSTEERCAMERA_GETWEIGHT_OFFSET UNITYSDK_OFFSET(0x18B792E0)
#define MOLEMOLE_BATTLE_MONOSTEERCAMERA_ONSTEERCREATE_OFFSET UNITYSDK_OFFSET(0x18B79170)
#define MOLEMOLE_BATTLE_MONOSTEERCAMERA__CTOR_OFFSET UNITYSDK_OFFSET(0x18B793F0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MonoSteerCamera_TypeDefinitionIndex = 75733;

	class MonoSteerCamera : public ::MoleMole::MonoSteer
	{
	public:
		::System::Single NormalStrength; // 0x20
		::System::Single TangentStrength; // 0x24
		::System::Single viewPortMinX; // 0x28
		::System::Single viewPortMaxX; // 0x2C
		::System::Single viewPortMinY; // 0x30
		::System::Single viewPortMaxY; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERCAMERA__CTOR_OFFSET))(this);
		}

		::BBDCAGEKHAJ* OnSteerCreate(::MoleMole::MonoSteer* MKIGHGFHEJO, ::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::BBDCAGEKHAJ*(*)(::PVOID, ::MoleMole::MonoSteer*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERCAMERA_ONSTEERCREATE_OFFSET))(this, MKIGHGFHEJO, KECKGDFIALJ);
		}

		::System::Single GetWeight(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MONOSTEERCAMERA_GETWEIGHT_OFFSET))(this, KECKGDFIALJ);
		}
	};
}
