#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimLadderClimbSlide.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimLadderConfig; }

#define RPG_GAMECORE_FIVEDIMLADDERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C5AB0)
#define RPG_GAMECORE_FIVEDIMLADDERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C5AC0)
#define RPG_GAMECORE_FIVEDIMLADDERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C5A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimLadderConfig_TypeDefinitionIndex = 18543;

	class FiveDimLadderConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsLadder; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::FiveDimLadderClimbSlide ClimbSide; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLADDERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLadderConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLadderConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLADDERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimLadderConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimLadderConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMLADDERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
