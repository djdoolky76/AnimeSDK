#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class NOCGHCNMOKB;
namespace RPG::GameCore { class SpecialAvatarRelicSubValueRow; }

#define RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAFD700)
#define RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1DAFD4E0)
#define RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAFD5E0)
#define RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1DAFD710)
#define RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1DAFD770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarRelicSubValueRow_TypeDefinitionIndex = 15119;

	class SpecialAvatarRelicSubValueRow : public ::System::Object
	{
	public:
		::Il2CppArray<::NOCGHCNMOKB*>* SubValue; // 0x10
		::System::UInt32 RelicSubValueType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialAvatarRelicSubValueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialAvatarRelicSubValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialAvatarRelicSubValueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialAvatarRelicSubValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICSUBVALUEROW_RESET_OFFSET))(this);
		}

	};
}
