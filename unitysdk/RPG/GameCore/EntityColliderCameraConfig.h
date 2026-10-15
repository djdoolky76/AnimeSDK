#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityColliderCameraConfig; }
namespace RPG::GameCore { class EntityColliderHeightCameraConfig; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }

#define RPG_GAMECORE_ENTITYCOLLIDERCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D645870)
#define RPG_GAMECORE_ENTITYCOLLIDERCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6456F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityColliderCameraConfig_TypeDefinitionIndex = 16430;

	class EntityColliderCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* KeyName; // 0x10
		::Il2CppArray<::RPG::GameCore::EntityColliderHeightCameraConfig*>* ConfigByHeight; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* OverrideByNameList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCOLLIDERCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityColliderCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityColliderCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCOLLIDERCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
