#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LittleGameSandboxGroupIsolationConfig; }

#define RPG_GAMECORE_LITTLEGAMESANDBOXGROUPISOLATIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA277C0)
#define RPG_GAMECORE_LITTLEGAMESANDBOXGROUPISOLATIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EA27580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameSandboxGroupIsolationConfig_TypeDefinitionIndex = 19102;

	class LittleGameSandboxGroupIsolationConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean HideOtherGroups; // 0x10
		::System::Boolean HideOwnerGroup; // 0x11
		::System::Byte _padding0[0x6];
		::Il2CppArray<::System::UInt32>* KeepGroupIDs; // 0x18
		::RPG::GameCore::HoyoTagContainer* UnloadGroupTags; // 0x20
		::Il2CppArray<::RPG::GameCore::LittleGameType>* HideOtherLittleGameTypes; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXGROUPISOLATIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameSandboxGroupIsolationConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameSandboxGroupIsolationConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMESANDBOXGROUPISOLATIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
