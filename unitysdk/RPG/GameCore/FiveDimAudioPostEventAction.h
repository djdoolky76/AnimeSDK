#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimAudioPostEventAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AF8A0)
#define RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AF8B0)
#define RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AF870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAudioPostEventAction_TypeDefinitionIndex = 18718;

	class FiveDimAudioPostEventAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean IgnoreInitEvent; // 0x10
		::System::Boolean IsGlobal; // 0x11
		::System::Byte _padding0[0x6];
		::System::String* EventName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAudioPostEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimAudioPostEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimAudioPostEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMAUDIOPOSTEVENTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
