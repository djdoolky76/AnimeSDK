#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityColliderHeightCameraConfig; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ENTITYCOLLIDERHEIGHTCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D645B40)
#define RPG_GAMECORE_ENTITYCOLLIDERHEIGHTCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6459E0)

namespace RPG::GameCore
{
	class EntityColliderHeightCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MinHeight; // 0x10
		::System::Single MaxHeight; // 0x14
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnStart; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCOLLIDERHEIGHTCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityColliderHeightCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityColliderHeightCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCOLLIDERHEIGHTCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
