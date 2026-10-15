#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameModeType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvSceneDangerMonsterWarningConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVSCENEDANGERMONSTERWARNINGCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37F790)
#define RPG_GAMECORE_ADVSCENEDANGERMONSTERWARNINGCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37F590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvSceneDangerMonsterWarningConfig_TypeDefinitionIndex = 17624;

	class AdvSceneDangerMonsterWarningConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Height; // 0x10
		::System::Single Radius; // 0x14
		::System::Single WarnCD; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::GameModeType>* ShowHintBlackList; // 0x20
		::System::String* WarnTextID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSCENEDANGERMONSTERWARNINGCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvSceneDangerMonsterWarningConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvSceneDangerMonsterWarningConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSCENEDANGERMONSTERWARNINGCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
