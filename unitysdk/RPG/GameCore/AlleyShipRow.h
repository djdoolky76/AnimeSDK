#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyShipType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AlleyShipRow; }
namespace System { class String; }

#define RPG_GAMECORE_ALLEYSHIPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EAD50)
#define RPG_GAMECORE_ALLEYSHIPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3EAC00)

namespace RPG::GameCore
{
	class AlleyShipRow : public ::System::Object
	{
	public:
		::System::String* ShipConfig; // 0x10
		::RPG::GameCore::AlleyShipType ShipType; // 0x18
		::System::UInt32 ShipID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHIPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AlleyShipRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AlleyShipRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ALLEYSHIPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
