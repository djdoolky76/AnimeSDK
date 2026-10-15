#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfHeadWaiterTalkConfig; }
namespace RPG::GameCore { class ElfHeadWaiterTalkConfigItem; }

#define RPG_GAMECORE_ELFHEADWAITERTALKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6366B0)
#define RPG_GAMECORE_ELFHEADWAITERTALKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D636560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElfHeadWaiterTalkConfig_TypeDefinitionIndex = 18464;

	class ElfHeadWaiterTalkConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CD; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ElfHeadWaiterTalkConfigItem*>* ConfigList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFHEADWAITERTALKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfHeadWaiterTalkConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfHeadWaiterTalkConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFHEADWAITERTALKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
