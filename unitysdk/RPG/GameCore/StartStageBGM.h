#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class StartStageBGM; }

#define RPG_GAMECORE_STARTSTAGEBGM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAF08B0)
#define RPG_GAMECORE_STARTSTAGEBGM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAF08C0)
#define RPG_GAMECORE_STARTSTAGEBGM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAF0880)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartStageBGM_TypeDefinitionIndex = 23415;

	class StartStageBGM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* IsEliteStage; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSTAGEBGM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartStageBGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartStageBGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSTAGEBGM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartStageBGM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartStageBGM*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTSTAGEBGM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
