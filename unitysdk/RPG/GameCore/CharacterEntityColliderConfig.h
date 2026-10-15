#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarColliderCameraConfig; }
namespace RPG::GameCore { class CharacterEntityColliderConfig; }
namespace RPG::GameCore { class EntityColliderCameraConfig; }

#define RPG_GAMECORE_CHARACTERENTITYCOLLIDERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D570380)
#define RPG_GAMECORE_CHARACTERENTITYCOLLIDERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D56EF90)

namespace RPG::GameCore
{
	class CharacterEntityColliderConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::AvatarColliderCameraConfig* CharacterColliderCameraConfig; // 0x10
		::Il2CppArray<::RPG::GameCore::EntityColliderCameraConfig*>* EntityColliderCameraConfigList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERENTITYCOLLIDERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterEntityColliderConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterEntityColliderConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERENTITYCOLLIDERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
