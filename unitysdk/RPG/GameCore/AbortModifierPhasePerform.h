#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AbortModifierPhasePerform; }

#define RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D311B40)
#define RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D311B50)
#define RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D311A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbortModifierPhasePerform_TypeDefinitionIndex = 23627;

	class AbortModifierPhasePerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AbortModifierPhasePerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AbortModifierPhasePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AbortModifierPhasePerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AbortModifierPhasePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ABORTMODIFIERPHASEPERFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
