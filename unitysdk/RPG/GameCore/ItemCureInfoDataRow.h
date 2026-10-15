#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemCureInfoDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_ITEMCUREINFODATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D795DD0)
#define RPG_GAMECORE_ITEMCUREINFODATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D795650)

namespace RPG::GameCore
{
	class ItemCureInfoDataRow : public ::System::Object
	{
	public:
		::System::String* ImgPath; // 0x10
		::RPG::Client::TextID CureInfoTitle; // 0x18
		::System::UInt32 ID; // 0x28
		::System::Boolean SyncServerOnUse; // 0x2C
		::System::Byte _padding0[0x3];
		::RPG::Client::TextID CureInfoDesc; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemCureInfoDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemCureInfoDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCUREINFODATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
