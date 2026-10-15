#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionBarEffectTextConfig; }
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONBAREFFECTTEXTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D342510)
#define RPG_GAMECORE_ACTIONBAREFFECTTEXTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3423B0)

namespace RPG::GameCore
{
	class ActionBarEffectTextConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RelativePath; // 0x10
		::RPG::GameCore::DynamicFloat* CustomNum; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBAREFFECTTEXTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionBarEffectTextConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionBarEffectTextConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBAREFFECTTEXTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
