#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class FCOEMCEDLNL;
class OKGJHHOHIIJ;
namespace RPG::GameCore { class SpecialAvatarRelicRow; }
namespace System { class String; }

#define RPG_GAMECORE_SPECIALAVATARRELICROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAFD460)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1DAFD1B0)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DAFD300)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1DAFD470)
#define RPG_GAMECORE_SPECIALAVATARRELICROW_RESET_OFFSET UNITYSDK_OFFSET(0x1DAFD4D0)

namespace RPG::GameCore
{
	class SpecialAvatarRelicRow : public ::System::Object
	{
	public:
		::System::String* Comment2; // 0x10
		::Il2CppArray<::OKGJHHOHIIJ*>* RelicIDList; // 0x18
		::System::UInt32 RelicPropertyType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialAvatarRelicRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SpecialAvatarRelicRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SpecialAvatarRelicRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::System::Void FromTableOffset(::System::ValueTuple a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SPECIALAVATARRELICROW_RESET_OFFSET))(this);
		}

	};
}
