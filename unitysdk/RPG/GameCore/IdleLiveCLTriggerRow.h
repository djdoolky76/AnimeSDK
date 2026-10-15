#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveCLTriggerType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveCLTriggerRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVECLTRIGGERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D778AF0)
#define RPG_GAMECORE_IDLELIVECLTRIGGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D778960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveCLTriggerRow_TypeDefinitionIndex = 11735;

	class IdleLiveCLTriggerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ParamList; // 0x10
		::System::UInt32 TriggerID; // 0x18
		::RPG::GameCore::IdleLiveCLTriggerType Type; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECLTRIGGERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveCLTriggerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveCLTriggerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVECLTRIGGERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
