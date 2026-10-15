#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterVOType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DisableCharacterVO; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DISABLECHARACTERVO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D616B50)
#define RPG_GAMECORE_DISABLECHARACTERVO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D616B60)
#define RPG_GAMECORE_DISABLECHARACTERVO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D616B10)

namespace RPG::GameCore
{
	class DisableCharacterVO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean AllType; // 0x18
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* SpecificTarget; // 0x20
		::System::Boolean RestoreVO; // 0x28
		::System::Byte _padding1[0x7];
		::Il2CppArray<::RPG::GameCore::CharacterVOType>* VOTypes; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLECHARACTERVO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableCharacterVO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableCharacterVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLECHARACTERVO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DisableCharacterVO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DisableCharacterVO*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISABLECHARACTERVO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
