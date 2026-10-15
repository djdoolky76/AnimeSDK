#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChronicleCustomUnlockCondition.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChronicleCustomUnlockConditionConfig; }

#define RPG_GAMECORE_CHRONICLECUSTOMUNLOCKCONDITIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D584BC0)
#define RPG_GAMECORE_CHRONICLECUSTOMUNLOCKCONDITIONCONFIG_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D584A80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChronicleCustomUnlockConditionConfig_TypeDefinitionIndex = 18974;

	class ChronicleCustomUnlockConditionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ChronicleCustomUnlockCondition Type; // 0x10
		::System::UInt32 Param; // 0x14
		::System::UInt32 FinishSubMissionID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLECUSTOMUNLOCKCONDITIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChronicleCustomUnlockConditionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChronicleCustomUnlockConditionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHRONICLECUSTOMUNLOCKCONDITIONCONFIG_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
