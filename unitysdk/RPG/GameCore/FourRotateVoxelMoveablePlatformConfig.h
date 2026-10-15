#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelMoveablePlatformConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELMOVEABLEPLATFORMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F0850)
#define RPG_GAMECORE_FOURROTATEVOXELMOVEABLEPLATFORMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F0860)
#define RPG_GAMECORE_FOURROTATEVOXELMOVEABLEPLATFORMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F0820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelMoveablePlatformConfig_TypeDefinitionIndex = 16759;

	class FourRotateVoxelMoveablePlatformConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsMoveablePlatform; // 0x10
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::MVector3>* MovePoints; // 0x18
		::Il2CppArray<::System::Single>* MoveDuration; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMOVEABLEPLATFORMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelMoveablePlatformConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelMoveablePlatformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMOVEABLEPLATFORMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelMoveablePlatformConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelMoveablePlatformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMOVEABLEPLATFORMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
