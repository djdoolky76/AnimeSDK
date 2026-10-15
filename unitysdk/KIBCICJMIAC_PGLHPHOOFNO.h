#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimZoneType.h"
#include "unitysdk/System/Object.h"

#define KIBCICJMIAC_PGLHPHOOFNO_CTOR_OFFSET UNITYSDK_OFFSET(0xB416B30)

inline static constexpr unsigned int KIBCICJMIAC_PGLHPHOOFNO_TypeDefinitionIndex = 55917;

	class KIBCICJMIAC_PGLHPHOOFNO : public ::System::Object
	{
	public:
		::System::Boolean NMOPDKGMDNM; // 0x10
		::System::Boolean KCNGAOLBCCD; // 0x11
		::System::Boolean DMJNFJBJOAH; // 0x12
		::System::Boolean FDEEGMNHLOL; // 0x13
		::RPG::GameCore::AnimZoneType KMLICIEMKFI; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIBCICJMIAC_PGLHPHOOFNO_CTOR_OFFSET))(this);
		}

	};
