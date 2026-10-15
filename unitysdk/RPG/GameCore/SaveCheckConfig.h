#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SaveCheckConfig; }

#define RPG_GAMECORE_SAVECHECKCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA88030)
#define RPG_GAMECORE_SAVECHECKCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA87FF0)

namespace RPG::GameCore
{
	class SaveCheckConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVECHECKCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SaveCheckConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SaveCheckConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SAVECHECKCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
