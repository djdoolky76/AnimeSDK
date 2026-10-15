#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemConsumeTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_ITEMCONSUMETYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D794DD0)
#define RPG_GAMECORE_ITEMCONSUMETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D794740)

namespace RPG::GameCore
{
	class ItemConsumeTypeRow : public ::System::Object
	{
	public:
		::System::String* TypeIconPath; // 0x10
		::System::UInt32 TypeID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID FilterName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemConsumeTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemConsumeTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCONSUMETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
