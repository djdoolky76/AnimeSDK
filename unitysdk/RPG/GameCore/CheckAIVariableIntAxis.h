#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckAIVariableIntAxis; }
namespace System { class String; }

#define RPG_GAMECORE_CHECKAIVARIABLEINTAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57B090)
#define RPG_GAMECORE_CHECKAIVARIABLEINTAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57B0A0)
#define RPG_GAMECORE_CHECKAIVARIABLEINTAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57B060)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckAIVariableIntAxis_TypeDefinitionIndex = 15511;

	class CheckAIVariableIntAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::String* VarName; // 0x10
		::RPG::GameCore::CompareType EquationType; // 0x18
		::System::Int32 TargetValue; // 0x1C
		::RPG::GameCore::FixPoint CheckScore; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKAIVARIABLEINTAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckAIVariableIntAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckAIVariableIntAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKAIVARIABLEINTAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckAIVariableIntAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckAIVariableIntAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKAIVARIABLEINTAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
