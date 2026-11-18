#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECOOBDCEKHG.h"
#include "unitysdk/MoleMole/LevelTriggerShapParam_HABKEBLHHLB.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_LEVELTRIGGERSHAPPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x14671550)

namespace MoleMole
{
	inline static constexpr unsigned int LevelTriggerShapParam_TypeDefinitionIndex = 47080;

	class LevelTriggerShapParam : public ::System::Object
	{
	public:
		::ECOOBDCEKHG Shape; // 0x10
		::System::Single SphereRaius; // 0x14
		::System::Single Radius; // 0x18
		::System::Single Height; // 0x1C
		::MoleMole::LevelTriggerShapParam_HABKEBLHHLB Direction; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LEVELTRIGGERSHAPPARAM__CTOR_OFFSET))(this);
		}
	};
}
