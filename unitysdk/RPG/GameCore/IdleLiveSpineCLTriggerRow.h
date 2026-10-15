#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveSpineAnimTriggerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpineCLTriggerRow; }

#define RPG_GAMECORE_IDLELIVESPINECLTRIGGERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77FFE0)
#define RPG_GAMECORE_IDLELIVESPINECLTRIGGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77FEA0)

namespace RPG::GameCore
{
	class IdleLiveSpineCLTriggerRow : public ::System::Object
	{
	public:
		::RPG::GameCore::IdleLiveSpineAnimTriggerType TriggerType; // 0x10
		::System::UInt32 TriggerID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINECLTRIGGERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveSpineCLTriggerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveSpineCLTriggerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPINECLTRIGGERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
