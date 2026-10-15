#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemComposeTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_ITEMCOMPOSETYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D793DC0)
#define RPG_GAMECORE_ITEMCOMPOSETYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D793650)

namespace RPG::GameCore
{
	class ItemComposeTypeRow : public ::System::Object
	{
	public:
		::System::String* UnlockDescribe; // 0x10
		::System::String* TypeIconPath; // 0x18
		::System::String* TypeTextmapID; // 0x20
		::System::Boolean IsMainType; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 TypeID; // 0x2C
		::System::UInt32 MainTypeID; // 0x30
		::System::UInt32 MainTypeOrder; // 0x34
		::System::UInt32 UnlockID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemComposeTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemComposeTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
