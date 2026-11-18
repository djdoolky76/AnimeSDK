#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define MOLEMOLE_NPCPROTOTYPENAVMESHOBSTACLEDATA_GMGMBLCOHNK_OFFSET UNITYSDK_OFFSET(0x10D4B470)
#define MOLEMOLE_NPCPROTOTYPENAVMESHOBSTACLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10D4B460)

namespace MoleMole
{
	inline static constexpr unsigned int NpcPrototypeNavMeshObstacleData_TypeDefinitionIndex = 79583;

	class NpcPrototypeNavMeshObstacleData : public ::System::Object
	{
	public:
		::System::Boolean Enable; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPENAVMESHOBSTACLEDATA__CTOR_OFFSET))(this);
		}

		::System::Void GMGMBLCOHNK(::MoleMole::Battle::Entity* KECKGDFIALJ)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_NPCPROTOTYPENAVMESHOBSTACLEDATA_GMGMBLCOHNK_OFFSET))(this, KECKGDFIALJ);
		}
	};
}
