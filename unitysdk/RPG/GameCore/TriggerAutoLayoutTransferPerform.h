#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AutoLayoutPerformType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerAutoLayoutTransferPerform; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERAUTOLAYOUTTRANSFERPERFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC165A0)
#define RPG_GAMECORE_TRIGGERAUTOLAYOUTTRANSFERPERFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC165B0)
#define RPG_GAMECORE_TRIGGERAUTOLAYOUTTRANSFERPERFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC16570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAutoLayoutTransferPerform_TypeDefinitionIndex = 23127;

	class TriggerAutoLayoutTransferPerform : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* UniqueEffectName; // 0x18
		::RPG::GameCore::AutoLayoutPerformType Type; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAUTOLAYOUTTRANSFERPERFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAutoLayoutTransferPerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAutoLayoutTransferPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAUTOLAYOUTTRANSFERPERFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerAutoLayoutTransferPerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerAutoLayoutTransferPerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERAUTOLAYOUTTRANSFERPERFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
