#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LocalbookConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_LOCALBOOKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7EEB80)
#define RPG_GAMECORE_LOCALBOOKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7EE400)

namespace RPG::GameCore
{
	class LocalbookConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* LocalBookImagePath; // 0x10
		::System::UInt32 BookSeriesID; // 0x18
		::System::UInt32 BookDisplayType; // 0x1C
		::RPG::Client::TextID BookContent; // 0x20
		::RPG::Client::TextID BookInsideName; // 0x30
		::System::UInt32 BookID; // 0x40
		::System::UInt32 BookSeriesInsideID; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LocalbookConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LocalbookConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCALBOOKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
