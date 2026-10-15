#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SelectMissionItemConfig; }
namespace System { class String; }

#define RPG_GAMECORE_SELECTMISSIONITEMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8C600)
#define RPG_GAMECORE_SELECTMISSIONITEMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8C450)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SelectMissionItemConfig_TypeDefinitionIndex = 20446;

	class SelectMissionItemConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 Item1; // 0x10
		::System::UInt32 Item2; // 0x14
		::System::UInt32 Item3; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* TriggerCustomString; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTMISSIONITEMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SelectMissionItemConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SelectMissionItemConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SELECTMISSIONITEMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
