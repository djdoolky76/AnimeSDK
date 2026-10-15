#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayVoice_Single; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYVOICE_SINGLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D905A80)
#define RPG_GAMECORE_PLAYVOICE_SINGLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D905A90)
#define RPG_GAMECORE_PLAYVOICE_SINGLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D905A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayVoice_Single_TypeDefinitionIndex = 20618;

	class PlayVoice_Single : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 VoiceID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* EmitterTargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SINGLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayVoice_Single* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayVoice_Single*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SINGLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayVoice_Single* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayVoice_Single*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SINGLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
