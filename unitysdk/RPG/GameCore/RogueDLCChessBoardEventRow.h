#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCChessBoardEventRow; }

#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D991E40)
#define RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D991770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCChessBoardEventRow_TypeDefinitionIndex = 14772;

	class RogueDLCChessBoardEventRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID ChessBoardEventName; // 0x10
		::RPG::Client::TextID ChessBoardEventDesc; // 0x20
		::System::UInt32 ChessBoardEventID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCChessBoardEventRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCChessBoardEventRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCCHESSBOARDEVENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
