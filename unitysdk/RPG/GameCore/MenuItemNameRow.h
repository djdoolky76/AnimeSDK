#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MenuItemNameRow; }

#define RPG_GAMECORE_MENUITEMNAMEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D873750)
#define RPG_GAMECORE_MENUITEMNAMEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8735D0)

namespace RPG::GameCore
{
	class MenuItemNameRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TextID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMNAMEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MenuItemNameRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MenuItemNameRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MENUITEMNAMEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
