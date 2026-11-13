#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelSelectEvolveBuildGearConfirm; }

#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA99BF0)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FA99BA0)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1FA99B50)
#define RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_INIT_OFFSET UNITYSDK_OFFSET(0x1FA99B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelSelectEvolveBuildGearConfirm_TypeDefinitionIndex = 58046;

	class LevelSelectEvolveBuildGearConfirm : public ::CMPGEAFHHDC
	{
	public:
		::System::UInt32 SelectIndex; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelSelectEvolveBuildGearConfirm* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelSelectEvolveBuildGearConfirm*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELSELECTEVOLVEBUILDGEARCONFIRM_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
