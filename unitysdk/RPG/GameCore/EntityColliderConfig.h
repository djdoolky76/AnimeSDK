#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarColliderCameraConfig; }
namespace RPG::GameCore { class EntityColliderCameraConfig; }
namespace RPG::GameCore { class EntityColliderConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ENTITYCOLLIDERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D617F50)
#define RPG_GAMECORE_ENTITYCOLLIDERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D617E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityColliderConfig_TypeDefinitionIndex = 16557;

	class EntityColliderConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::AvatarColliderCameraConfig*>* AvatarColliderCameraConfigs; // 0x10
		::Il2CppArray<::RPG::GameCore::EntityColliderCameraConfig*>* EntityColliderCameraConfigList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCOLLIDERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityColliderConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityColliderConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYCOLLIDERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
