#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CMPGEAFHHDC.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
namespace RPG::GameCore { class LevelEvolveBuildGetKillScore; }

#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA93280)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x1FA93210)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x1FA931C0)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GET_DELTASCORE_OFFSET UNITYSDK_OFFSET(0x1FA93260)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_INIT_OFFSET UNITYSDK_OFFSET(0x1FA93150)
#define RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_SET_DELTASCORE_OFFSET UNITYSDK_OFFSET(0x1FA93270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelEvolveBuildGetKillScore_TypeDefinitionIndex = 58053;

	class LevelEvolveBuildGetKillScore : public ::CMPGEAFHHDC
	{
	public:
		::RPG::GameCore::FixPoint _DeltaScore_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::LevelEvolveBuildGetKillScore* Init(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::LevelEvolveBuildGetKillScore*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_INIT_OFFSET))(this, a1);
		}

		::System::UInt32 GetSourceRuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GETSOURCERUNTIMEID_OFFSET))(this);
		}

		::RPG::GameCore::EventType GetEventType()
		{
			return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GETEVENTTYPE_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_DeltaScore()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_GET_DELTASCORE_OFFSET))(this);
		}

		::System::Void set_DeltaScore(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELEVOLVEBUILDGETKILLSCORE_SET_DELTASCORE_OFFSET))(this, a1);
		}

	};
}
