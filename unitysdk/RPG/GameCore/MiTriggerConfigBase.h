#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MiTriggerConfigBase; }

#define RPG_GAMECORE_MITRIGGERCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D87F780)
#define RPG_GAMECORE_MITRIGGERCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D87F790)
#define RPG_GAMECORE_MITRIGGERCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D87F450)

namespace RPG::GameCore
{
	class MiTriggerConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MITRIGGERCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiTriggerConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiTriggerConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MITRIGGERCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MiTriggerConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MiTriggerConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MITRIGGERCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
