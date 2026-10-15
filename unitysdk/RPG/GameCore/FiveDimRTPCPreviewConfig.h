#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimRTPCPreviewConfig; }

#define RPG_GAMECORE_FIVEDIMRTPCPREVIEWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D6D60)
#define RPG_GAMECORE_FIVEDIMRTPCPREVIEWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D6D20)

namespace RPG::GameCore
{
	class FiveDimRTPCPreviewConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRTPCPREVIEWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimRTPCPreviewConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimRTPCPreviewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMRTPCPREVIEWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
