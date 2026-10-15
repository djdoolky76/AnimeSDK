#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PerformanceBgImagePanelConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F7300)
#define RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8F71C0)

namespace RPG::GameCore
{
	class PerformanceBgImagePanelConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::String* Comment; // 0x18
		::System::UInt32 PrefabLoadMetaIndex; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerformanceBgImagePanelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerformanceBgImagePanelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERFORMANCEBGIMAGEPANELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
