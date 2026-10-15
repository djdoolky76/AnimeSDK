#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class TrainExteriorConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINEXTERIORCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2C5A0)
#define RPG_GAMECORE_TRAINEXTERIORCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC2C3F0)

namespace RPG::GameCore
{
	class TrainExteriorConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* Conditions; // 0x10
		::System::String* DynamicOptionalBlock; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 Priority; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINEXTERIORCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainExteriorConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainExteriorConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINEXTERIORCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
