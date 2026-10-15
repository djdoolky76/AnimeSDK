#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAvatarEventOptionRow; }

#define RPG_GAMECORE_PLANETFESAVATAREVENTOPTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D921090)
#define RPG_GAMECORE_PLANETFESAVATAREVENTOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D920DB0)

namespace RPG::GameCore
{
	class PlanetFesAvatarEventOptionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextOptionList; // 0x10
		::System::UInt32 ActivityRewardID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EventContent; // 0x20
		::System::UInt32 RewardPoolID; // 0x30
		::System::UInt32 EventOptionID; // 0x34
		::RPG::Client::TextID OptionBubbleTalk; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREVENTOPTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesAvatarEventOptionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesAvatarEventOptionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATAREVENTOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
