#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimatorParameterType.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSetAnimParamEventAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMSETANIMPARAMEVENTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AADA0)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMEVENTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6AADB0)
#define RPG_GAMECORE_FIVEDIMSETANIMPARAMEVENTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AAD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSetAnimParamEventAction_TypeDefinitionIndex = 18645;

	class FiveDimSetAnimParamEventAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::Boolean SyncToEffects; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* ParameterName; // 0x18
		::RPG::GameCore::AnimatorParameterType ParameterType; // 0x20
		::System::Boolean BoolValue; // 0x24
		::System::Byte _padding1[0x3];
		::System::Single FloatValue; // 0x28
		::System::Int32 IntValue; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMEVENTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetAnimParamEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetAnimParamEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMEVENTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSetAnimParamEventAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSetAnimParamEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSETANIMPARAMEVENTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
