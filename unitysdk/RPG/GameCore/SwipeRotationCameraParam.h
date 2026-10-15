#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SwipeRotationCameraParam; }

#define RPG_GAMECORE_SWIPEROTATIONCAMERAPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3ED40)
#define RPG_GAMECORE_SWIPEROTATIONCAMERAPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3EA70)

namespace RPG::GameCore
{
	class SwipeRotationCameraParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* XAngleLimit; // 0x10
		::RPG::GameCore::DynamicFloat* YAngleLimit; // 0x18
		::RPG::GameCore::DynamicFloat* RecoverDamp; // 0x20
		::RPG::GameCore::DynamicFloat* Factor; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWIPEROTATIONCAMERAPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwipeRotationCameraParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwipeRotationCameraParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWIPEROTATIONCAMERAPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
