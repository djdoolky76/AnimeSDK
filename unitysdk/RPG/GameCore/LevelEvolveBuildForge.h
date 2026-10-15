#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
namespace RPG::GameCore { class LevelEvolveBuildForge; }

#define RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_CTOR_OFFSET UNITYSDK_OFFSET(0xE6E3D50)
#define RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0xE6E3D00)
#define RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0xE6E3CB0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_INIT_OFFSET UNITYSDK_OFFSET(0xE6E3C70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildForge_TypeDefinitionIndex = 56830;

	class LevelEvolveBuildForge : public ::CMPGEAFHHDC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEvolveBuildForge* Init()
		{
			return ((::RPG::GameCore::LevelEvolveBuildForge*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_INIT_OFFSET))(this);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDFORGE_GETEVENTTYPE_OFFSET))(this);
		}

	};
}
