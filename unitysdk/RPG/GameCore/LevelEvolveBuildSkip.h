#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"

#define RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA933E0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FA93390)
#define RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1FA93340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildSkip_TypeDefinitionIndex = 58050;

	class LevelEvolveBuildSkip : public ::CMPGEAFHHDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_CTOR_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDSKIP_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
