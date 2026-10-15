#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CreateAvatarAssistant; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_CREATEAVATARASSISTANT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B3040)
#define RPG_GAMECORE_CREATEAVATARASSISTANT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B3050)
#define RPG_GAMECORE_CREATEAVATARASSISTANT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B3010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CreateAvatarAssistant_TypeDefinitionIndex = 23396;

	class CreateAvatarAssistant : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 SpecialAvatarID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* SpecialAvatarIDKey; // 0x20
		::RPG::GameCore::DynamicFloat* AssistantTriggerKey; // 0x28
		::RPG::GameCore::DynamicFloat* AssistantAbilityKey; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAVATARASSISTANT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateAvatarAssistant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateAvatarAssistant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAVATARASSISTANT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CreateAvatarAssistant* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CreateAvatarAssistant*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CREATEAVATARASSISTANT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
