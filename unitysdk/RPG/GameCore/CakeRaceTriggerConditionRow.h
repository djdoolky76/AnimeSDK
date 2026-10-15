#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceTriggerConditionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceTriggerConditionRow; }
namespace System { class String; }

#define RPG_GAMECORE_CAKERACETRIGGERCONDITIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D525E90)
#define RPG_GAMECORE_CAKERACETRIGGERCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D525D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTriggerConditionRow_TypeDefinitionIndex = 11020;

	class CakeRaceTriggerConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* ParamList; // 0x10
		::System::UInt32 ConditionID; // 0x18
		::RPG::GameCore::CakeRaceTriggerConditionType ConditionType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRIGGERCONDITIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceTriggerConditionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceTriggerConditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACETRIGGERCONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
