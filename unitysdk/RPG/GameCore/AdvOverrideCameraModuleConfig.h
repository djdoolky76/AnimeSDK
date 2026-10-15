#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvOverrideCameraModuleConfig; }
namespace RPG::GameCore { class OverrideCameraModuleConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVOVERRIDECAMERAMODULECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A9800)
#define RPG_GAMECORE_ADVOVERRIDECAMERAMODULECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A9810)
#define RPG_GAMECORE_ADVOVERRIDECAMERAMODULECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A97D0)

namespace RPG::GameCore
{
	class AdvOverrideCameraModuleConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::OverrideCameraModuleConfig*>* OverrideConfigs; // 0x18
		::System::Single BlendTime; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* BlendCurve; // 0x28
		::System::Boolean ClearWhenResetCamera; // 0x30
		::System::Boolean IsReset; // 0x31
		::System::Boolean SetToDefaultYAxis; // 0x32
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDECAMERAMODULECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvOverrideCameraModuleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvOverrideCameraModuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDECAMERAMODULECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvOverrideCameraModuleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvOverrideCameraModuleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVOVERRIDECAMERAMODULECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
