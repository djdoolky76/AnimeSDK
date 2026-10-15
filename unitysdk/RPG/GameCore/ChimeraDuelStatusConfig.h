#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelStatusType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelStatusConfig; }

#define RPG_GAMECORE_CHIMERADUELSTATUSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AAAF0)
#define RPG_GAMECORE_CHIMERADUELSTATUSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AA9D0)

namespace RPG::GameCore
{
	class ChimeraDuelStatusConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChimeraDuelStatusType StatusType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::BaseChimeraDuelValueGetter* DurationValueGetter; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelStatusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelStatusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
