#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayVoice; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PLAYVOICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D933000)
#define RPG_GAMECORE_PLAYVOICE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D933010)
#define RPG_GAMECORE_PLAYVOICE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D932FC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayVoice_TypeDefinitionIndex = 20616;

	class PlayVoice : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* VoiceIDs; // 0x18
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Single IntervalTime; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayVoice* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayVoice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayVoice* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayVoice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYVOICE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
