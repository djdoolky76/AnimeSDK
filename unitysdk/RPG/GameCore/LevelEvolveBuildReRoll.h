#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_CTOR_OFFSET UNITYSDK_OFFSET(0xF1F10F0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xF1F10A0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xF1F1050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildReRoll_TypeDefinitionIndex = 58051;

	class LevelEvolveBuildReRoll : public ::CMPGEAFHHDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDREROLL_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
