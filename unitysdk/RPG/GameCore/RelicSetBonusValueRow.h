#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicSetBonusValueRow; }

#define RPG_GAMECORE_RELICSETBONUSVALUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB98490)
#define RPG_GAMECORE_RELICSETBONUSVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB98290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSetBonusValueRow_TypeDefinitionIndex = 10901;

	class RelicSetBonusValueRow : public ::System::Object
	{
	public:
		::System::UInt32 SetID; // 0x10
		::System::Single BonusValue; // 0x14
		::RPG::GameCore::AvatarPropertyType Property; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint Threshold; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETBONUSVALUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RelicSetBonusValueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RelicSetBonusValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSETBONUSVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
