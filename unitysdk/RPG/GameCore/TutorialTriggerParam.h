#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TutorialTriggerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialTriggerParam; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALTRIGGERPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC6E9B0)
#define RPG_GAMECORE_TUTORIALTRIGGERPARAM_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC6E8A0)

namespace RPG::GameCore
{
	class TutorialTriggerParam : public ::System::Object
	{
	public:
		::System::String* TriggerParam; // 0x10
		::RPG::GameCore::TutorialTriggerType TriggerType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALTRIGGERPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialTriggerParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialTriggerParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALTRIGGERPARAM_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
