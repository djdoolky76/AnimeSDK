#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IsometricEnableClusterLighting; }

#define RPG_GAMECORE_ISOMETRICENABLECLUSTERLIGHTING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D760750)
#define RPG_GAMECORE_ISOMETRICENABLECLUSTERLIGHTING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D760760)
#define RPG_GAMECORE_ISOMETRICENABLECLUSTERLIGHTING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D760720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IsometricEnableClusterLighting_TypeDefinitionIndex = 22210;

	class IsometricEnableClusterLighting : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISOMETRICENABLECLUSTERLIGHTING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::IsometricEnableClusterLighting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IsometricEnableClusterLighting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISOMETRICENABLECLUSTERLIGHTING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::IsometricEnableClusterLighting* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IsometricEnableClusterLighting*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ISOMETRICENABLECLUSTERLIGHTING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
