#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TutorialRestoreType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialDataRow; }
namespace RPG::GameCore { class TutorialTriggerParam; }
namespace System { class String; }

#define RPG_GAMECORE_TUTORIALDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E343400)
#define RPG_GAMECORE_TUTORIALDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E342960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialDataRow_TypeDefinitionIndex = 15536;

	class TutorialDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* FinishTriggerParams; // 0x10
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* TriggerParams; // 0x18
		::System::String* TutorialJsonPath; // 0x20
		::RPG::GameCore::TutorialRestoreType RestoreType; // 0x28
		::System::Boolean CanInterrupt; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 Priority; // 0x30
		::System::UInt32 TutorialID; // 0x34
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
