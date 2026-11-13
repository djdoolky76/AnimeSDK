#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayVideoQTEStage.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventureAudioManager; }
namespace RPG::Client { class BattleGamePhase; }
namespace System { class String; }

#define RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A8C10)
#define RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E2A9040)
#define RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER_SETSTAGE_1_OFFSET UNITYSDK_OFFSET(0x1E2A8FF0)
#define RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER_SETSTAGE_OFFSET UNITYSDK_OFFSET(0x1E2A8E20)
#define RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__GETSTATE_OFFSET UNITYSDK_OFFSET(0x1E2A9270)
#define RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__ISBATTLEPHASEALIVE_OFFSET UNITYSDK_OFFSET(0x1E2A9420)
#define RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__RESETBATTLESTATE_OFFSET UNITYSDK_OFFSET(0x1E2A91C0)
#define RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__RESTOREADVENTURESTATE_OFFSET UNITYSDK_OFFSET(0x1E2A9120)
#define RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__SETSTAGE_OFFSET UNITYSDK_OFFSET(0x1E2A8E70)
#define RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__SWITCHADVENTURESTATE_OFFSET UNITYSDK_OFFSET(0x1E2A92E0)
#define RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__SWITCHBATTLESTATE_OFFSET UNITYSDK_OFFSET(0x1E2A9380)

namespace RPG::Client
{
	inline static constexpr unsigned int PlayVideoQTEAudioController_TypeDefinitionIndex = 74934;

	class PlayVideoQTEAudioController : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* _BattleInsertedState; // 0x10
		::System::String* _PreviousMissionEmotionState; // 0x18
		::RPG::Client::AdventureAudioManager* _AdventureAudioManager; // 0x20
		::System::String* _LoopState; // 0x28
		::RPG::Client::BattleGamePhase* _BattlePhase; // 0x30
		::System::String* _EndState; // 0x38
		::System::String* _StartState; // 0x40
		::System::Boolean _HasChangedAdventureState; // 0x48
		::System::Boolean _Disposed; // 0x49
		::System::Void _ctor(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void SetStage(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER_SETSTAGE_OFFSET))(this, a1);
		}

		::System::Void SetStage_1(::RPG::Client::PlayVideoQTEStage a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayVideoQTEStage))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER_SETSTAGE_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::System::Void _SetStage(::RPG::Client::PlayVideoQTEStage a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayVideoQTEStage))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__SETSTAGE_OFFSET))(this, a1);
		}

		::System::Void _SwitchAdventureState(::RPG::Client::PlayVideoQTEStage a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayVideoQTEStage, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__SWITCHADVENTURESTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _RestoreAdventureState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__RESTOREADVENTURESTATE_OFFSET))(this);
		}

		::System::Void _SwitchBattleState(::RPG::Client::PlayVideoQTEStage a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlayVideoQTEStage, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__SWITCHBATTLESTATE_OFFSET))(this, a1, a2);
		}

		::System::Void _ResetBattleState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__RESETBATTLESTATE_OFFSET))(this);
		}

		::System::Boolean _IsBattlePhaseAlive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__ISBATTLEPHASEALIVE_OFFSET))(this);
		}

		::System::String* _GetState(::RPG::Client::PlayVideoQTEStage a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::PlayVideoQTEStage))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLAYVIDEOQTEAUDIOCONTROLLER__GETSTATE_OFFSET))(this, a1);
		}

	};
}
