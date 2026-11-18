#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCDKBCGNDLE.h"
#include "unitysdk/BMHHKPBMJNK.h"
#include "unitysdk/EBGCNKJOFAL.h"
#include "unitysdk/EHOOLLACPFF.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/GBKFEKIBCEA.h"
#include "unitysdk/KAEKLPANHDJ.h"
#include "unitysdk/MoleMole/Config/ConfigInteractionFanCylinder.h"
#include "unitysdk/MoleMole/InteractantTagListEntry.h"

namespace MoleMole { class InteractionSpecialParamBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_INTERACTTRAITDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x130E2580)

namespace MoleMole
{
	inline static constexpr unsigned int InteractTraitData_TypeDefinitionIndex = 86138;

	class InteractTraitData : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::EBGCNKJOFAL SpecialInteractableType; // 0x58
		::System::Byte _padding0[0x4];
		::MoleMole::InteractionSpecialParamBase* SpecialParam; // 0x60
		::System::Int32 InteractionCntMax; // 0x68
		::BMHHKPBMJNK InteractPriority; // 0x6C
		::GBKFEKIBCEA StartMode; // 0x70
		::MoleMole::Config::ConfigInteractionFanCylinder TargetEntity; // 0x74
		::System::Boolean AgentTriggerEnable; // 0x9C
		::System::Byte _padding1[0x3];
		::MoleMole::Config::ConfigInteractionFanCylinder Agent; // 0xA0
		::System::Boolean PendingWhenNotActivated; // 0xC8
		::System::Boolean NonBattleStatus; // 0xC9
		::System::Byte _padding2[0x6];
		::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>* ZoneTagWhiteList; // 0xD0
		::System::Collections::Generic::List_1<::MoleMole::InteractantTagListEntry>* ZoneTagBlackList; // 0xD8
		::System::Collections::Generic::List_1<::System::String*>* TagWhiteList; // 0xE0
		::System::Collections::Generic::List_1<::System::String*>* TagBlackList; // 0xE8
		::System::Boolean EnableObstacleCheck; // 0xF0
		::System::Byte _padding3[0x7];
		::System::Collections::Generic::List_1<::System::String*>* ObstacleTagWhiteList; // 0xF8
		::KAEKLPANHDJ ObstacleCheckQuality; // 0x100
		::System::Single RequiredInputHoldTime; // 0x104
		::BCDKBCGNDLE HoldInteractionInputBlockFlags; // 0x108
		::EHOOLLACPFF HoldInteractionInterruptSourceFlags; // 0x10C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_INTERACTTRAITDATA__CTOR_OFFSET))(this);
		}
	};
}
