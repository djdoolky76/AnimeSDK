#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameMode.h"
#include "unitysdk/RPG/Client/Prop/PuzzleBoardBase.h"
#include "unitysdk/RPG/GameCore/PuzzleCustomEvent.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EODHPDKAAGE;
class FDPALAEIHPB;
class KHPOKIKCOFO;
class MovieGameAssetConfig;
class NFPPGOFECMH;
class OAFCCICMILM;
namespace RPG::Client { class AchievementData; }
namespace RPG::Client::LittleGame { class MovieGameFullScreenTranslateEffect; }
namespace RPG::Client::LittleGame { class MovieGameModeComponent; }
namespace RPG::Client::LittleGame { class MovieGamePlayer; }
namespace RPG::Client::LittleGame { class MovieGameStatisticComponent; }
namespace RPG::Client::LittleGame { class OperationConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class MovieGameConstConfig; }
namespace RPG::GameCore { class PropInitPuzzle; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_MOVIEGAMECONTROLLER_CGGKBPOPFLP_OFFSET UNITYSDK_OFFSET(0xD8CD250)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0xD8CEB60)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD8CBDA0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_DNCMGLKKKHM_OFFSET UNITYSDK_OFFSET(0xD8CCFC0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_DPNBNNNFOJO_OFFSET UNITYSDK_OFFSET(0xD8CA7B0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_ECICBKAOBIK_OFFSET UNITYSDK_OFFSET(0xD8CC2D0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_EEAFMGJAHFL_OFFSET UNITYSDK_OFFSET(0xD8CC9E0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_EFHJKPBFBEC_OFFSET UNITYSDK_OFFSET(0xD8CCE80)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_EPCCCIKOHJI_OFFSET UNITYSDK_OFFSET(0xD8CD3E0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_FMELBCAFGEK_OFFSET UNITYSDK_OFFSET(0xD8CE750)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODECOMPONENT_OFFSET UNITYSDK_OFFSET(0xD8CB260)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODEENTITY_OFFSET UNITYSDK_OFFSET(0xD8CB2D0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODE_OFFSET UNITYSDK_OFFSET(0xD8CAEB0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETOPERATIONCONFIG_OFFSET UNITYSDK_OFFSET(0xD8CB330)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETPLAYERSPANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0xD8CAF60)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_GETSTATISTICS_OFFSET UNITYSDK_OFFSET(0xD8CB1F0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_HBEJBENKLIE_OFFSET UNITYSDK_OFFSET(0xD8CA570)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_INITPUZZLE_OFFSET UNITYSDK_OFFSET(0xD8CA170)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_ISPUZZLEFINISH_OFFSET UNITYSDK_OFFSET(0xD8CB730)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_JJNDIHBOMPN_OFFSET UNITYSDK_OFFSET(0xD8CC760)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_KCADBBJFDOG_OFFSET UNITYSDK_OFFSET(0xD8CBB00)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_LJCCCPPGEPL_OFFSET UNITYSDK_OFFSET(0xD8CCB20)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_MHLAJOMDJOG_OFFSET UNITYSDK_OFFSET(0xD8CB770)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_OAMEJGLODEI_OFFSET UNITYSDK_OFFSET(0xD8CCCA0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_ONANYTRIGGERSOUNDEVENT_OFFSET UNITYSDK_OFFSET(0xD8CE8C0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_ONPLAYERHITSTATE_OFFSET UNITYSDK_OFFSET(0xD8CE9D0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_OPCMLLLNDPH_OFFSET UNITYSDK_OFFSET(0xD8CC5F0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_PDOMGDONPAG_OFFSET UNITYSDK_OFFSET(0xD8CC8A0)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_RESETPUZZLE_OFFSET UNITYSDK_OFFSET(0xD8CA910)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xD8CAA00)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_TICKPUZZLE_OFFSET UNITYSDK_OFFSET(0xD8CB390)
#define RPG_CLIENT_MOVIEGAMECONTROLLER_TRIGGERPUZZLECUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0xD8CEAA0)

namespace RPG::Client
{
	class MovieGameController : public ::RPG::Client::Prop::PuzzleBoardBase
	{
	public:
		::FDPALAEIHPB* FKINCGODJEP; // 0x48
		::OAFCCICMILM* CKJLAAOFGCC; // 0x50
		::EODHPDKAAGE* INPAJAAFACE; // 0x58
		::RPG::Client::LittleGame::MovieGamePlayer* EBFCJAHKNGO; // 0x60
		::System::Boolean POHEELFNCOM; // 0x68
		::System::Byte _padding0[0x3];
		::System::UInt32 LevelID; // 0x6C
		::MovieGameAssetConfig* GameConfig; // 0x70
		::UnityEngine::AnimationCurve* SpeedCurve; // 0x78
		::RPG::Client::LittleGame::MovieGameFullScreenTranslateEffect* MoveBoard; // 0x80
		::RPG::GameCore::MovieGameConstConfig* POIDJMHLKJN; // 0x88
		::RPG::Client::AchievementData* FGGMNKBLPEK; // 0x90
		::RPG::Client::AchievementData* AONDKIDMGLG; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_CTOR_OFFSET))(this);
		}

		::System::Void InitPuzzle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TaskContext* a2, ::RPG::GameCore::PropInitPuzzle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PropInitPuzzle*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_INITPUZZLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ResetPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_RESETPUZZLE_OFFSET))(this);
		}

		::System::Void StartPuzzle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_STARTPUZZLE_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieGameMode GetGameMode()
		{
			return ((::RPG::Client::LittleGame::MovieGameMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODE_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetPlayerSpAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_GETPLAYERSPANCHORPOSITION_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieGameStatisticComponent* GetStatistics()
		{
			return ((::RPG::Client::LittleGame::MovieGameStatisticComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_GETSTATISTICS_OFFSET))(this);
		}

		::RPG::Client::LittleGame::MovieGameModeComponent* GetGameModeComponent()
		{
			return ((::RPG::Client::LittleGame::MovieGameModeComponent*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODECOMPONENT_OFFSET))(this);
		}

		::NFPPGOFECMH* GetGameModeEntity()
		{
			return ((::NFPPGOFECMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_GETGAMEMODEENTITY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::OperationConfig* GetOperationConfig()
		{
			return ((::RPG::Client::LittleGame::OperationConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_GETOPERATIONCONFIG_OFFSET))(this);
		}

		::System::Void TickPuzzle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_TICKPUZZLE_OFFSET))(this, a1);
		}

		::System::Void MHLAJOMDJOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_MHLAJOMDJOG_OFFSET))(this);
		}

		::System::Void KCADBBJFDOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_KCADBBJFDOG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void ECICBKAOBIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_ECICBKAOBIK_OFFSET))(this);
		}

		::System::Boolean IsPuzzleFinish()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_ISPUZZLEFINISH_OFFSET))(this);
		}

		::System::Void OPCMLLLNDPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_OPCMLLLNDPH_OFFSET))(this);
		}

		::System::Void JJNDIHBOMPN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_JJNDIHBOMPN_OFFSET))(this, a1);
		}

		::System::Void PDOMGDONPAG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_PDOMGDONPAG_OFFSET))(this, a1);
		}

		::System::Void EEAFMGJAHFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_EEAFMGJAHFL_OFFSET))(this, a1);
		}

		::System::Void LJCCCPPGEPL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_LJCCCPPGEPL_OFFSET))(this, a1);
		}

		::System::Void OAMEJGLODEI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_OAMEJGLODEI_OFFSET))(this, a1);
		}

		::System::Void EFHJKPBFBEC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_EFHJKPBFBEC_OFFSET))(this, a1);
		}

		::System::Void DNCMGLKKKHM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_DNCMGLKKKHM_OFFSET))(this, a1);
		}

		::System::Void DPNBNNNFOJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_DPNBNNNFOJO_OFFSET))(this);
		}

		::System::Void FMELBCAFGEK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_FMELBCAFGEK_OFFSET))(this, a1);
		}

		::System::Void EPCCCIKOHJI(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_EPCCCIKOHJI_OFFSET))(this, a1);
		}

		::System::Void OnAnyTriggerSoundEvent(::KHPOKIKCOFO* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_ONANYTRIGGERSOUNDEVENT_OFFSET))(this, a1, a2);
		}

		::System::Void OnPlayerHitState(::KHPOKIKCOFO* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::KHPOKIKCOFO*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_ONPLAYERHITSTATE_OFFSET))(this, a1, a2);
		}

		::System::Void TriggerPuzzleCustomEvent(::RPG::GameCore::PuzzleCustomEvent a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PuzzleCustomEvent))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_TRIGGERPUZZLECUSTOMEVENT_OFFSET))(this, a1);
		}

		::System::Void CGGKBPOPFLP(::FDPALAEIHPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_CGGKBPOPFLP_OFFSET))(this, a1);
		}

		::System::Void HBEJBENKLIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MOVIEGAMECONTROLLER_HBEJBENKLIE_OFFSET))(this);
		}

	};
}
