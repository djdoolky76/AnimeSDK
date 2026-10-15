#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetTriggerEnableAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DB830)
#define RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6DB840)
#define RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DB800)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetTriggerEnableAction_TypeDefinitionIndex = 18685;

	class FiveDimSetTriggerEnableAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean Enable; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* TriggerName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetTriggerEnableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetTriggerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetTriggerEnableAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetTriggerEnableAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETTRIGGERENABLEACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
