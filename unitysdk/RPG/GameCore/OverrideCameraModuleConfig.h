#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CameraModuleConfigOverrideType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideCameraModuleConfig; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDECAMERAMODULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E6D10)
#define RPG_GAMECORE_OVERRIDECAMERAMODULECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E6C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideCameraModuleConfig_TypeDefinitionIndex = 22193;

	class OverrideCameraModuleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CameraModuleConfigOverrideType OverrideType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* OverrideConfigPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDECAMERAMODULECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideCameraModuleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideCameraModuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDECAMERAMODULECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
