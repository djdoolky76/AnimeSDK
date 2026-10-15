#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetAnimParamByDoorKeyCountAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AA870)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AA880)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AA840)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAnimParamByDoorKeyCountAction_TypeDefinitionIndex = 18648;

	class FiveDimSetAnimParamByDoorKeyCountAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean SyncToEffects; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* ParameterName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetAnimParamByDoorKeyCountAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMBYDOORKEYCOUNTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
