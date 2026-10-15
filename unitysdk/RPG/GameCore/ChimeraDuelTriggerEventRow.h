#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelTriggerEventRow; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELTRIGGEREVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ABBA0)
#define RPG_GAMECORE_CHIMERADUELTRIGGEREVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5ABA00)

namespace RPG::GameCore
{
	class ChimeraDuelTriggerEventRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* ParamList; // 0x10
		::System::String* EventJsonPath; // 0x18
		::System::UInt32 EventID; // 0x20
		::System::UInt32 Priority; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTRIGGEREVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelTriggerEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelTriggerEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELTRIGGEREVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
