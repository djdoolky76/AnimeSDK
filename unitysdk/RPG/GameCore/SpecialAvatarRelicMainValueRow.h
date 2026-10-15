#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class NOCGHCNMOKB;
namespace RPG::GameCore { class SpecialAvatarRelicMainValueRow; }

#define RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAFD130)
#define RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1DAFCF10)
#define RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAFD010)
#define RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1DAFD140)
#define RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_RESET_OFFSET UNITYSDK_OFFSET(0x1DAFD1A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialAvatarRelicMainValueRow_TypeDefinitionIndex = 15118;

	class SpecialAvatarRelicMainValueRow : public ::System::Object
	{
	public:
		::Il2CppArray<::NOCGHCNMOKB*>* MainValue; // 0x10
		::System::UInt32 RelicMainValueType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialAvatarRelicMainValueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialAvatarRelicMainValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialAvatarRelicMainValueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialAvatarRelicMainValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICMAINVALUEROW_RESET_OFFSET))(this);
		}

	};
}
