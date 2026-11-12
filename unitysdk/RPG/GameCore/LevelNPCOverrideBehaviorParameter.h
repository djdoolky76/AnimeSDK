#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNPCOverrideBehaviorParameter; }

#define RPG_GAMECORE_LEVELNPCOVERRIDEBEHAVIORPARAMETER_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9FA8A0)
#define RPG_GAMECORE_LEVELNPCOVERRIDEBEHAVIORPARAMETER_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1E9FA8B0)
#define RPG_GAMECORE_LEVELNPCOVERRIDEBEHAVIORPARAMETER_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9F9740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCOverrideBehaviorParameter_TypeDefinitionIndex = 17437;

	class LevelNPCOverrideBehaviorParameter : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCOVERRIDEBEHAVIORPARAMETER_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCOverrideBehaviorParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCOverrideBehaviorParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCOVERRIDEBEHAVIORPARAMETER_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNPCOverrideBehaviorParameter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNPCOverrideBehaviorParameter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCOVERRIDEBEHAVIORPARAMETER_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
