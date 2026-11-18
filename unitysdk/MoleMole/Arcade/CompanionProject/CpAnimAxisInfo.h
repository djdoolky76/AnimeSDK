#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNAJKGMIIEK.h"
#include "unitysdk/MOGGIFCGNAK.h"
#include "unitysdk/NMEBLNJMHGI.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_ARCADE_COMPANIONPROJECT_CPANIMAXISINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8C28B0)

namespace MoleMole::Arcade::CompanionProject
{
	inline static constexpr unsigned int CpAnimAxisInfo_TypeDefinitionIndex = 94638;

	class CpAnimAxisInfo : public ::System::Object
	{
	public:
		::MOGGIFCGNAK axis; // 0x10
		::System::Single baseValue; // 0x14
		::NMEBLNJMHGI param; // 0x18
		::DNAJKGMIIEK curve; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_COMPANIONPROJECT_CPANIMAXISINFO__CTOR_OFFSET))(this);
		}
	};
}
