#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GroupLocalTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PropState.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupEntityCreateConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }

#define RPG_GAMECORE_GROUPENTITYCREATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D71CC80)
#define RPG_GAMECORE_GROUPENTITYCREATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D71C890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GroupEntityCreateConfig_TypeDefinitionIndex = 21225;

	class GroupEntityCreateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 InstanceID; // 0x10
		::System::Boolean IsCreateAllEntityType; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::GameCore::GroupLocalTargetType SpawnEntityType; // 0x18
		::System::Boolean OverridePropState; // 0x1C
		::System::Byte _padding1[0x3];
		::RPG::GameCore::PropState PropState; // 0x20
		::System::Byte _padding2[0x4];
		::RPG::GameCore::LevelGraphValueSource* GraphDynamicValues; // 0x28
		::System::Boolean NeedAppear; // 0x30
		::System::Boolean IsOverrideArtModelOffset; // 0x31
		::System::Byte _padding3[0x2];
		::RPG::MVector3 OverrideArtModelOffset; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPENTITYCREATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupEntityCreateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupEntityCreateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPENTITYCREATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
