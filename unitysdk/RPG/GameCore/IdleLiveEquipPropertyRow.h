#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/IdleLiveAvatarPropertyType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveEquipPropertyRow; }

#define RPG_GAMECORE_IDLELIVEEQUIPPROPERTYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74CE20)
#define RPG_GAMECORE_IDLELIVEEQUIPPROPERTYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D74C960)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEquipPropertyRow_TypeDefinitionIndex = 11757;

	class IdleLiveEquipPropertyRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* RandomFactorList; // 0x10
		::System::UInt32 OffsetQuantizeCount; // 0x18
		::System::UInt32 ID; // 0x1C
		::RPG::GameCore::FixPoint LevelParam; // 0x20
		::RPG::GameCore::FixPoint RarityPower; // 0x28
		::RPG::GameCore::FixPoint RarityParam; // 0x30
		::RPG::GameCore::FixPoint OffsetRange; // 0x38
		::RPG::GameCore::FixPoint BasicParam; // 0x40
		::System::Boolean IsRare; // 0x48
		::System::Byte _padding0[0x3];
		::RPG::GameCore::IdleLiveAvatarPropertyType PropertyType; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPPROPERTYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveEquipPropertyRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveEquipPropertyRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEEQUIPPROPERTYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
