#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetAudioEmotionState; }
namespace System { class String; }

#define RPG_GAMECORE_SETAUDIOEMOTIONSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA67D40)
#define RPG_GAMECORE_SETAUDIOEMOTIONSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA67D50)
#define RPG_GAMECORE_SETAUDIOEMOTIONSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA67D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetAudioEmotionState_TypeDefinitionIndex = 20751;

	class SetAudioEmotionState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StateName; // 0x18
		::System::Boolean ResetToFloorDefault; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 SubMissionID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIOEMOTIONSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAudioEmotionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAudioEmotionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIOEMOTIONSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetAudioEmotionState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetAudioEmotionState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETAUDIOEMOTIONSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
