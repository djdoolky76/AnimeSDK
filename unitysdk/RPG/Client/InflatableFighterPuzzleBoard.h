#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class DDIAHGAMCCG;
class HGBBKPCCGDB;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_BROADCASTEVENT_OFFSET UNITYSDK_OFFSET(0xD34FB40)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_CTOR_OFFSET UNITYSDK_OFFSET(0xD34FFC0)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD34F7B0)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_FIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0xD34FCC0)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_GET_HITSTOPMANAGER_OFFSET UNITYSDK_OFFSET(0xD34FFB0)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_IIGJMHOBDNE_OFFSET UNITYSDK_OFFSET(0xD34FDB0)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xD34F410)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_LJCCCPPGEPL_OFFSET UNITYSDK_OFFSET(0xD34FE60)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_PGIEALKAPJO_OFFSET UNITYSDK_OFFSET(0xD34FEE0)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_PNJNJPPBEBE_OFFSET UNITYSDK_OFFSET(0xD34FE00)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_STARTFIGHTER_OFFSET UNITYSDK_OFFSET(0xD34FD60)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xD34F480)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xD34FA60)
#define RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_UPDATE_OFFSET UNITYSDK_OFFSET(0xD34FC10)

namespace RPG::Client
{
	class InflatableFighterPuzzleBoard : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::System::Single TotalTime; // 0x48
		::System::Single HitStopDuration; // 0x4C
		::System::Single StopTimeScale; // 0x50
		::System::Single AISafeMinPressure; // 0x54
		::System::Single AISafeMaxPressure; // 0x58
		::System::Single AIChargeProbWhenLow; // 0x5C
		::System::Single AIComfyRangeChargeProbScale; // 0x60
		::System::Single AIImpulseDuration; // 0x64
		::System::Single AIImpulseCooldown; // 0x68
		::System::Single AIHighCutSafetyMargin; // 0x6C
		::System::Single AIDodgeChanceOnOppAttack; // 0x70
		::System::Single AIDodgeDecisionCooldown; // 0x74
		::UnityEngine::GameObject* Light; // 0x78
		::UnityEngine::GameObject* Dark; // 0x80
		::UnityEngine::GameObject* VCameraPrefab; // 0x88
		::DDIAHGAMCCG* ACJPLJPIAII; // 0x90
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x98
		::HGBBKPCCGDB* PPOKJOGJOKP; // 0xA0
		::RPG::GameCore::StringHash GPOEFLDLNDB; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_STARTPUZZLE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_DISPOSE_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void BroadcastEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_BROADCASTEVENT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_UPDATE_OFFSET))(this);
		}

		::System::Void FixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_FIXEDUPDATE_OFFSET))(this);
		}

		::System::Void StartFighter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_STARTFIGHTER_OFFSET))(this);
		}

		::System::Void IIGJMHOBDNE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_IIGJMHOBDNE_OFFSET))(this, a1);
		}

		::System::Void PNJNJPPBEBE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_PNJNJPPBEBE_OFFSET))(this, a1);
		}

		::System::Void LJCCCPPGEPL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_LJCCCPPGEPL_OFFSET))(this, a1);
		}

		::System::Void PGIEALKAPJO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_PGIEALKAPJO_OFFSET))(this, a1);
		}

		::HGBBKPCCGDB* get_HitStopManager()
		{
			return ((::HGBBKPCCGDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_INFLATABLEFIGHTERPUZZLEBOARD_GET_HITSTOPMANAGER_OFFSET))(this);
		}

	};
}
