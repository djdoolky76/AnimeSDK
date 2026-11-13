#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPhysicsBakedConfig; }

#define RPG_GAMECORE_FIVEDIMPHYSICSBAKEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E86E1D0)
#define RPG_GAMECORE_FIVEDIMPHYSICSBAKEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E868C80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimPhysicsBakedConfig_TypeDefinitionIndex = 16817;

	class FiveDimPhysicsBakedConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CapsuleRadius; // 0x10
		::System::Single CapsuleHeight; // 0x14
		::System::Single CapsuleCrouchHeight; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPHYSICSBAKEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimPhysicsBakedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimPhysicsBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMPHYSICSBAKEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
