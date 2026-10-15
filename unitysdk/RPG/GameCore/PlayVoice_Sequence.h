#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayVoice_Sequence; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYVOICE_SEQUENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D905890)
#define RPG_GAMECORE_PLAYVOICE_SEQUENCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9058A0)
#define RPG_GAMECORE_PLAYVOICE_SEQUENCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D905850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayVoice_Sequence_TypeDefinitionIndex = 20617;

	class PlayVoice_Sequence : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* VoiceIDs; // 0x18
		::RPG::GameCore::TargetEvaluator* EmitterTargetType; // 0x20
		::System::Single IntervalTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SEQUENCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayVoice_Sequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayVoice_Sequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SEQUENCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayVoice_Sequence* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayVoice_Sequence*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_SEQUENCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
