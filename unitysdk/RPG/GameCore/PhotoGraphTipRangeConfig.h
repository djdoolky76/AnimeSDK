#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphTipRangeConfig; }

#define RPG_GAMECORE_PHOTOGRAPHTIPRANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D913DE0)
#define RPG_GAMECORE_PHOTOGRAPHTIPRANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D913C20)

namespace RPG::GameCore
{
	class PhotoGraphTipRangeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single MinDistance; // 0x10
		::System::Single MaxDistance; // 0x14
		::RPG::Client::TextID TipText; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTIPRANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphTipRangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphTipRangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHTIPRANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
