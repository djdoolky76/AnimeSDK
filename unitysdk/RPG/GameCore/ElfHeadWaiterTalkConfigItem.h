#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfHeadWaiterTalkConfigItem; }
namespace System { class String; }

#define RPG_GAMECORE_ELFHEADWAITERTALKCONFIGITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D636810)
#define RPG_GAMECORE_ELFHEADWAITERTALKCONFIGITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6366C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfHeadWaiterTalkConfigItem_TypeDefinitionIndex = 18465;

	class ElfHeadWaiterTalkConfigItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Desc; // 0x10
		::Il2CppArray<::System::String*>* BehaviorNameList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFHEADWAITERTALKCONFIGITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfHeadWaiterTalkConfigItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfHeadWaiterTalkConfigItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFHEADWAITERTALKCONFIGITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
