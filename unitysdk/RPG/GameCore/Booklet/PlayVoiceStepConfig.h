#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Booklet/StepConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore::Booklet { class PlayVoiceStepConfig; }

#define RPG_GAMECORE_BOOKLET_PLAYVOICESTEPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D474C80)
#define RPG_GAMECORE_BOOKLET_PLAYVOICESTEPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D474C90)
#define RPG_GAMECORE_BOOKLET_PLAYVOICESTEPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D474C30)

namespace RPG::GameCore::Booklet
{
	inline static constexpr unsigned int PlayVoiceStepConfig_TypeDefinitionIndex = 24984;

	class PlayVoiceStepConfig : public ::RPG::GameCore::Booklet::StepConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* SentenceIDList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PLAYVOICESTEPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::PlayVoiceStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::PlayVoiceStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PLAYVOICESTEPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::Booklet::PlayVoiceStepConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::Booklet::PlayVoiceStepConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKLET_PLAYVOICESTEPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
