#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelManuallyCheckLose; }

#define RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6F3FE0)
#define RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6F3F90)
#define RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6F3F40)
#define RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_INIT_OFFSET UNITYSDK_OFFSET(0xE6F3F00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelManuallyCheckLose_TypeDefinitionIndex = 56833;

	class LevelManuallyCheckLose : public ::CMPGEAFHHDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelManuallyCheckLose* Init()
		{
			return ((::RPG::GameCore::LevelManuallyCheckLose*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_INIT_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELMANUALLYCHECKLOSE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
