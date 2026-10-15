#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtAbilityConfig; }
namespace RPG::GameCore { class RtAbilityConfigList; }
namespace RPG::GameCore { class RtModifierConfig; }
namespace RPG::GameCore { class TaskListTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_RTABILITYCONFIGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA48590)
#define RPG_GAMECORE_RTABILITYCONFIGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA483E0)

namespace RPG::GameCore
{
	class RtAbilityConfigList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::RtAbilityConfig*>* AbilityList; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::RtModifierConfig*>* GlobalModifiers; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskListTemplate*>* GlobalTemplates; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYCONFIGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtAbilityConfigList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtAbilityConfigList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTABILITYCONFIGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
