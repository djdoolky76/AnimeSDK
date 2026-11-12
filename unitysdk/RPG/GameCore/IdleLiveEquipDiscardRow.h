#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEquipDiscardRow; }

#define RPG_GAMECORE_IDLELIVEEQUIPDISCARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98DB10)
#define RPG_GAMECORE_IDLELIVEEQUIPDISCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E98D920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEquipDiscardRow_TypeDefinitionIndex = 11807;

	class IdleLiveEquipDiscardRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint EquipLevelAddPower; // 0x10
		::System::UInt32 EquipLevel; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint SpEquipLevelAddPower; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPDISCARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveEquipDiscardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveEquipDiscardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPDISCARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
