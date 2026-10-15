#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingFesTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesTargetConfig; }

#define RPG_GAMECORE_CHENLINGFESTARGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D563530)
#define RPG_GAMECORE_CHENLINGFESTARGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5632F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesTargetConfig_TypeDefinitionIndex = 21494;

	class ChenLingFesTargetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChenLingFesTargetType TargetType; // 0x10
		::RPG::GameCore::LittleGameEntityType LittleGameEntityType; // 0x14
		::System::UInt32 TagID; // 0x18
		::System::UInt32 ItemID; // 0x1C
		::System::UInt32 NoTagID; // 0x20
		::System::UInt32 RandomCount; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESTARGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESTARGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
