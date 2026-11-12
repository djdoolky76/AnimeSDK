#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RollerCoasterSectionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ROLLERCOASTERSECTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC59FA0)
#define RPG_GAMECORE_ROLLERCOASTERSECTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC59D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RollerCoasterSectionConfig_TypeDefinitionIndex = 22399;

	class RollerCoasterSectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* TrackDataPrefabPath; // 0x10
		::System::String* RoadVisualPrefabPath; // 0x18
		::System::Single CoasterScale; // 0x20
		::System::Boolean OverrideCameraOffset; // 0x24
		::System::Byte _padding0[0x3];
		::RPG::MVector3 OpenFollowOffset; // 0x28
		::RPG::MVector3 ClosedFollowOffset; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERSECTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RollerCoasterSectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RollerCoasterSectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROLLERCOASTERSECTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
