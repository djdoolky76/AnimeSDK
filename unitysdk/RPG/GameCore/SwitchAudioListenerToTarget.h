#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchAudioListenerToTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHAUDIOLISTENERTOTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB118B0)
#define RPG_GAMECORE_SWITCHAUDIOLISTENERTOTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB118C0)
#define RPG_GAMECORE_SWITCHAUDIOLISTENERTOTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB11880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchAudioListenerToTarget_TypeDefinitionIndex = 21900;

	class SwitchAudioListenerToTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHAUDIOLISTENERTOTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchAudioListenerToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchAudioListenerToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHAUDIOLISTENERTOTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchAudioListenerToTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchAudioListenerToTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHAUDIOLISTENERTOTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
