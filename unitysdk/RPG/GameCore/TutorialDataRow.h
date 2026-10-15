#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TutorialRestoreType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialDataRow; }
namespace RPG::GameCore { class TutorialTriggerParam; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC3A190)
#define RPG_GAMECORE_TUTORIALDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC39720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialDataRow_TypeDefinitionIndex = 15380;

	class TutorialDataRow : public ::System::Object
	{
	public:
		::System::String* TutorialJsonPath; // 0x10
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* FinishTriggerParams; // 0x18
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* TriggerParams; // 0x20
		::System::Boolean CanInterrupt; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 Priority; // 0x2C
		::System::UInt32 TutorialID; // 0x30
		::RPG::GameCore::TutorialRestoreType RestoreType; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
