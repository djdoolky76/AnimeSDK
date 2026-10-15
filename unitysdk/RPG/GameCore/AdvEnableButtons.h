#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEnableButtons; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENABLEBUTTONS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36E8E0)
#define RPG_GAMECORE_ADVENABLEBUTTONS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D36E8F0)
#define RPG_GAMECORE_ADVENABLEBUTTONS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D36E8B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnableButtons_TypeDefinitionIndex = 20540;

	class AdvEnableButtons : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TriggerName; // 0x20
		::Il2CppArray<::System::String*>* ButtonsByName; // 0x28
		::System::Boolean IsEnable; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEBUTTONS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEnableButtons* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEnableButtons*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEBUTTONS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEnableButtons* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEnableButtons*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLEBUTTONS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
