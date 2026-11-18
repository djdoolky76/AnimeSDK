#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIGHDPGCGEH.h"
#include "unitysdk/NMEBLNJMHGI.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CPAOEAREAPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED40340)

namespace MoleMole::Arcade::CompanionProject
{
	inline static constexpr unsigned int CpAoeAreaParam_TypeDefinitionIndex = 94424;

	class CpAoeAreaParam : public ::System::Object
	{
	public:
		::DIGHDPGCGEH areaType; // 0x10
		::System::Single areaParam1; // 0x14
		::NMEBLNJMHGI param1Param; // 0x18
		::System::Single areaParam2; // 0x20
		::NMEBLNJMHGI param2Param; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CPAOEAREAPARAM__CTOR_OFFSET))(this);
		}
	};
}
