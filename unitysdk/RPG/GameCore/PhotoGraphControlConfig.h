#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BodySize.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FindAnchorConfig; }
namespace RPG::GameCore { class PhotoGraphControlConfig; }

#define RPG_GAMECORE_PHOTOGRAPHCONTROLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D910880)
#define RPG_GAMECORE_PHOTOGRAPHCONTROLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D910590)

namespace RPG::GameCore
{
	class PhotoGraphControlConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ResetPlayerPosition; // 0x10
		::System::Boolean Keep3CCameraRotation; // 0x11
		::System::Byte _padding0[0x6];
		::RPG::GameCore::FindAnchorConfig* AnchorConfig; // 0x18
		::System::Single OverrideCameraHeight; // 0x20
		::RPG::GameCore::BodySize OverrideCameraHeightByBodySize; // 0x24
		::System::Boolean LockPlayerMove; // 0x28
		::System::Boolean LockCameraRotate; // 0x29
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHCONTROLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphControlConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphControlConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHCONTROLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
