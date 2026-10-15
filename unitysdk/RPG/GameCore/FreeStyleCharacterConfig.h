#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FreeStyleCharacterConfig; }
namespace RPG::GameCore { class FreeStyleCharacterExtendLayerConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FREESTYLECHARACTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F3BE0)
#define RPG_GAMECORE_FREESTYLECHARACTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F3940)

namespace RPG::GameCore
{
	class FreeStyleCharacterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* FreeStyleTransitionInfoConfigPath; // 0x10
		::Il2CppArray<::System::String*>* FreeStyleAnimZoneConfigPaths; // 0x18
		::Il2CppArray<::System::String*>* FreeStyleAnimEventConfigPaths; // 0x20
		::System::String* FreeStyleStateConfigPath; // 0x28
		::System::String* FreeStyleGraphConfigPath; // 0x30
		::System::UInt32 FreeStyleStandByMotionID; // 0x38
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::FreeStyleCharacterExtendLayerConfig*>* ExtendLayerConfigs; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FreeStyleCharacterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FreeStyleCharacterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FREESTYLECHARACTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
