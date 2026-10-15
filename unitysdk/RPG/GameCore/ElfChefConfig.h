#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ElfChefConfig; }
namespace RPG::GameCore { class ElfFoodEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ELFCHEFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D634960)
#define RPG_GAMECORE_ELFCHEFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D634790)

namespace RPG::GameCore
{
	class ElfChefConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single CookBaseSpeed; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::ElfFoodEventConfig*>* Events; // 0x18
		::System::String* PerfectEfffectPath; // 0x20
		::System::UInt32 MaxWaitCookCount; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFCHEFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ElfChefConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ElfChefConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ELFCHEFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
