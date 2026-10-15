#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraAbilityProgressBase; }

#define RPG_GAMECORE_CHIMERAABILITYPROGRESSBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5976B0)
#define RPG_GAMECORE_CHIMERAABILITYPROGRESSBASE_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D597C10)
#define RPG_GAMECORE_CHIMERAABILITYPROGRESSBASE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D596AC0)

namespace RPG::GameCore
{
	class ChimeraAbilityProgressBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraAbilityProgressBase* NextProgress; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYPROGRESSBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityProgressBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityProgressBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYPROGRESSBASE_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraAbilityProgressBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraAbilityProgressBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAABILITYPROGRESSBASE_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
