#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyStepConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_TRAINPARTYSTEPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC35DB0)
#define RPG_GAMECORE_TRAINPARTYSTEPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC35A00)

namespace RPG::GameCore
{
	class TrainPartyStepConfigRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::Il2CppArray<::System::UInt32>* StaticPropIDList; // 0x18
		::System::UInt32 CoinCost; // 0x20
		::System::UInt32 GroupID; // 0x24
		::System::UInt32 ID; // 0x28
		::System::UInt32 SortID; // 0x2C
		::System::Boolean HasCutScene; // 0x30
		::System::Boolean HasPreview; // 0x31
		::System::Byte _padding0[0x6];
		::RPG::Client::TextID Name; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTEPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyStepConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyStepConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTEPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
