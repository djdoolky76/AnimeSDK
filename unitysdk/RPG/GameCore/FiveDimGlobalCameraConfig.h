#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimDefaultCameraConfig; }
namespace RPG::GameCore { class FiveDimGlobalCameraConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMGLOBALCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C1D20)
#define RPG_GAMECORE_FIVEDIMGLOBALCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BFFD0)

namespace RPG::GameCore
{
	class FiveDimGlobalCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimDefaultCameraConfig* DefaultCameraTemplate; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimDefaultCameraConfig*>* BakedDefaultCameras; // 0x18
		::System::String* FixCameraPrefabPath; // 0x20
		::System::String* FollowCameraPrefabPath; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGLOBALCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGlobalCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGlobalCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGLOBALCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
