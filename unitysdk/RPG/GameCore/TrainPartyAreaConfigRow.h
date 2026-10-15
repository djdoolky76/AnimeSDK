#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ProgressBonus; }
namespace RPG::GameCore { class TrainPartyAreaConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYAREACONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2DAD0)
#define RPG_GAMECORE_TRAINPARTYAREACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC2D700)

namespace RPG::GameCore
{
	class TrainPartyAreaConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ProgressBonus*>* ProgressBonusList; // 0x10
		::Il2CppArray<::System::String*>* HiddenBlockList; // 0x18
		::Il2CppArray<::System::String*>* ShowBlockList; // 0x20
		::System::String* IconPath; // 0x28
		::System::UInt32 RequireAreaID; // 0x30
		::System::Boolean IsShowInActivity; // 0x34
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID Name; // 0x38
		::System::UInt32 Sort; // 0x48
		::System::UInt32 ID; // 0x4C
		::System::UInt32 FirstStep; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYAREACONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyAreaConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyAreaConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYAREACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
