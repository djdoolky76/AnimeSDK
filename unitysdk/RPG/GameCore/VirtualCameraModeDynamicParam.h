#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwipeRotationCameraParam; }
namespace RPG::GameCore { class VirtualCameraModeDynamicParam; }

#define RPG_GAMECORE_VIRTUALCAMERAMODEDYNAMICPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC903F0)
#define RPG_GAMECORE_VIRTUALCAMERAMODEDYNAMICPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC902E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VirtualCameraModeDynamicParam_TypeDefinitionIndex = 20829;

	class VirtualCameraModeDynamicParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean OrbitalTransposerBias; // 0x10
		::System::Byte _padding0[0x7];
		::RPG::GameCore::SwipeRotationCameraParam* SwipeCameraConfig; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIRTUALCAMERAMODEDYNAMICPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VirtualCameraModeDynamicParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VirtualCameraModeDynamicParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIRTUALCAMERAMODEDYNAMICPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
