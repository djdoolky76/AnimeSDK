#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelRevert2DVoxelConfig; }
namespace RPG::GameCore { class PropButtonConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1590)
#define RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F15A0)
#define RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F1560)

namespace RPG::GameCore
{
	class FourRotateVoxelRevert2DVoxelConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsRevert2DVoxel; // 0x10
		::System::Boolean IsOnlyRotate; // 0x11
		::System::Byte _padding0[0x6];
		::RPG::GameCore::PropButtonConfig* InteractButtonConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelRevert2DVoxelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERT2DVOXELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
