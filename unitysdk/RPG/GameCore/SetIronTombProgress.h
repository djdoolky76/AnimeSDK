#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IronTombProgressMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class IronTombNormalModeThresholdConfig; }
namespace RPG::GameCore { class SetIronTombProgress; }

#define RPG_GAMECORE_SETIRONTOMBPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAB6F70)
#define RPG_GAMECORE_SETIRONTOMBPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAB6F80)
#define RPG_GAMECORE_SETIRONTOMBPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAB6F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetIronTombProgress_TypeDefinitionIndex = 22802;

	class SetIronTombProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::IronTombProgressMode ProgressMode; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Progress; // 0x20
		::System::Single Duration; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::GameCore::IronTombNormalModeThresholdConfig* NormalModeThresholdConfig; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIRONTOMBPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetIronTombProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetIronTombProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIRONTOMBPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetIronTombProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetIronTombProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETIRONTOMBPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
