#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionBarUIStatus.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActionBarEffectConfig; }
namespace RPG::GameCore { class ActionBarEffectTextConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIONBAREFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3423A0)
#define RPG_GAMECORE_ACTIONBAREFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3421D0)

namespace RPG::GameCore
{
	class ActionBarEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ActionBarUIStatus Status; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* Path; // 0x18
		::System::Boolean IsExclusive; // 0x20
		::System::Byte _padding1[0x7];
		::Il2CppArray<::RPG::GameCore::ActionBarEffectTextConfig*>* TextConfigs; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBAREFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActionBarEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActionBarEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIONBAREFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
