#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BookSeriesWorldConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BOOKSERIESWORLDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D472510)
#define RPG_GAMECORE_BOOKSERIESWORLDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D472320)

namespace RPG::GameCore
{
	class BookSeriesWorldConfigRow : public ::System::Object
	{
	public:
		::System::String* BookSeriesWorldIconPath; // 0x10
		::System::String* BookSeriesWorldBackgroundPath; // 0x18
		::System::UInt32 BookSeriesWorld; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BookSeriesWorldTextmapID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESWORLDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BookSeriesWorldConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BookSeriesWorldConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOOKSERIESWORLDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
