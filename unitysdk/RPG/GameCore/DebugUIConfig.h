#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DebugUIConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_DEBUGUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C9490)
#define RPG_GAMECORE_DEBUGUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C92B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DebugUIConfig_TypeDefinitionIndex = 16457;

	class DebugUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* EnvSystemProfilePaths; // 0x10
		::System::String* DefaultEnvSystemPath; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MazeStagePaths; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* ChapterStagePrefabPaths; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DebugUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DebugUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
