#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelRevertConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELREVERTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1700)
#define RPG_GAMECORE_FOURROTATEVOXELREVERTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EE8A0)

namespace RPG::GameCore
{
	class FourRotateVoxelRevertConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single RevertAll2DDuration; // 0x10
		::System::Single RevertSingle2DDuration; // 0x14
		::System::Single RevertSingle2DRotateConst; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelRevertConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelRevertConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELREVERTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
