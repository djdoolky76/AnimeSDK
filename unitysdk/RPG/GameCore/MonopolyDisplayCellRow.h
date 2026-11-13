#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonopolyDisplayCellType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonopolyDisplayCellRow; }
namespace System { class String; }

#define RPG_GAMECORE_MONOPOLYDISPLAYCELLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E702670)
#define RPG_GAMECORE_MONOPOLYDISPLAYCELLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E702390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyDisplayCellRow_TypeDefinitionIndex = 12109;

	class MonopolyDisplayCellRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::RPG::Client::TextID CellName; // 0x18
		::RPG::Client::TextID CellDesc; // 0x28
		::RPG::GameCore::MonopolyDisplayCellType Type; // 0x38
		::System::UInt32 DisplayID; // 0x3C
		::System::UInt32 DisplaySort; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYDISPLAYCELLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonopolyDisplayCellRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonopolyDisplayCellRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYDISPLAYCELLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
