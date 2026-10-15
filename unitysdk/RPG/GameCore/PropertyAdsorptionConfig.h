#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropertyAdsorptionConfig; }

#define RPG_GAMECORE_PROPERTYADSORPTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95C8B0)
#define RPG_GAMECORE_PROPERTYADSORPTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D95C740)

namespace RPG::GameCore
{
	class PropertyAdsorptionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint AdsorptionThresh; // 0x10
		::System::Int32 FractionalDigit; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPERTYADSORPTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropertyAdsorptionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropertyAdsorptionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPERTYADSORPTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
