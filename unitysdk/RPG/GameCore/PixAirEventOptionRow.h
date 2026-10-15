#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirBasicType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEventOptionRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PIXAIREVENTOPTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91BE20)
#define RPG_GAMECORE_PIXAIREVENTOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91BB70)

namespace RPG::GameCore
{
	class PixAirEventOptionRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PixAirBasicType, ::System::UInt32>* BasicCost; // 0x10
		::RPG::Client::TextID OptionDescribe; // 0x18
		::System::UInt32 OptionID; // 0x28
		::System::UInt32 ContentID; // 0x2C
		::RPG::Client::TextID OptionEffectDesc; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREVENTOPTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirEventOptionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirEventOptionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIREVENTOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
