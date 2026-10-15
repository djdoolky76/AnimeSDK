#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCJILFFNINI;
namespace RPG::GameCore { class DamageByAttackProperty; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define HPBAKOEHBHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15DB48D0)

inline static constexpr unsigned int HPBAKOEHBHJ_TypeDefinitionIndex = 54424;

	class HPBAKOEHBHJ : public ::System::Object
	{
	public:
		::RPG::GameCore::TaskContext* GPKCGOLOJKC; // 0x10
		::RPG::GameCore::DamageByAttackProperty* NEACMLNOEIL; // 0x18
		::NCJILFFNINI* GNHAPABLMDF; // 0x20
		::RPG::GameCore::GameEntity* DLIDCOJKLNI; // 0x28
		::RPG::GameCore::GameEntity* GNOCBLOMLAC; // 0x30
		::System::Boolean PJKMBCJJGAB; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPBAKOEHBHJ_CTOR_OFFSET))(this);
		}

	};
