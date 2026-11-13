#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeprecatedWaypointConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DEPRECATEDWAYPOINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F009230)
#define RPG_GAMECORE_DEPRECATEDWAYPOINTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F0090E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeprecatedWaypointConfig_TypeDefinitionIndex = 17658;

	class DeprecatedWaypointConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* AnchorName; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnArrive; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPRECATEDWAYPOINTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeprecatedWaypointConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeprecatedWaypointConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEPRECATEDWAYPOINTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
