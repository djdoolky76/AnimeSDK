#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ReactionTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RA_SetStimulusInfo; }

#define RPG_GAMECORE_RA_SETSTIMULUSINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D937C20)
#define RPG_GAMECORE_RA_SETSTIMULUSINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D937C30)
#define RPG_GAMECORE_RA_SETSTIMULUSINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D937BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RA_SetStimulusInfo_TypeDefinitionIndex = 20044;

	class RA_SetStimulusInfo : public ::RPG::GameCore::ReactionTaskConfig
	{
	public:
		::System::Boolean SetInstigator; // 0x18
		::System::Boolean SetStimulusPos; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETSTIMULUSINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_SetStimulusInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_SetStimulusInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETSTIMULUSINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RA_SetStimulusInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RA_SetStimulusInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RA_SETSTIMULUSINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
