#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyStaticType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyStaticConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSTATICCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC35870)
#define RPG_GAMECORE_TRAINPARTYSTATICCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC35620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyStaticConfigRow_TypeDefinitionIndex = 15329;

	class TrainPartyStaticConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SlotList; // 0x10
		::System::String* IconPath; // 0x18
		::System::Boolean UseLowLight; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x24
		::System::UInt32 AreaID; // 0x28
		::RPG::GameCore::TrainPartyStaticType Type; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTATICCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyStaticConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyStaticConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTATICCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
