#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMoveConfig; }
namespace RPG::GameCore { class FourRotateVoxelMoveConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C2D80)
#define RPG_GAMECORE_FOURROTATEVOXELMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C0FB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelMoveConfig_TypeDefinitionIndex = 16739;

	class FourRotateVoxelMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Int32 MaxRotateCnt; // 0x10
		::System::Single MaxFallDownVoxelSize; // 0x14
		::System::Single FallDownDelayResetTime; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FiveDimMoveConfig* BaseMoveConfig; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
