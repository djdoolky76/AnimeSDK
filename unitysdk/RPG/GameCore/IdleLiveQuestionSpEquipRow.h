#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestionSpEquipRow; }

#define RPG_GAMECORE_IDLELIVEQUESTIONSPEQUIPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D750FB0)
#define RPG_GAMECORE_IDLELIVEQUESTIONSPEQUIPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D750E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionSpEquipRow_TypeDefinitionIndex = 11833;

	class IdleLiveQuestionSpEquipRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 SpEquipID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONSPEQUIPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveQuestionSpEquipRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONSPEQUIPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
