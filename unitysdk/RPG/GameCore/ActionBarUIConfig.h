#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionBarCustomUIStyle.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionBarUIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONBARUICONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D343D30)
#define RPG_GAMECORE_ACTIONBARUICONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D343C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionBarUIConfig_TypeDefinitionIndex = 22665;

	class ActionBarUIConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ActionBarCustomUIStyle CustomUIStyle; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* HeadIconPath; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBARUICONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionBarUIConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionBarUIConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBARUICONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
