#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/System/Object.h"

#define KIBCICJMIAC_PGLHPHOOFNO_CTOR_OFFSET UNITYSDK_OFFSET(0xB410070)

inline static constexpr unsigned int KIBCICJMIAC_PGLHPHOOFNO_TypeDefinitionIndex = 55917;

	class KIBCICJMIAC_PGLHPHOOFNO : public ::System::Object
	{
	public:
		::RPG::GameCore::AnimZoneType KMLICIEMKFI; // 0x10
		::System::Boolean FDEEGMNHLOL; // 0x14
		::System::Boolean DMJNFJBJOAH; // 0x15
		::System::Boolean KCNGAOLBCCD; // 0x16
		::System::Boolean NMOPDKGMDNM; // 0x17
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBCICJMIAC_PGLHPHOOFNO_CTOR_OFFSET))(this);
		}

	};
