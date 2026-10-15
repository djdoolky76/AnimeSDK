#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ItemComposeTagRow; }
namespace System { class String; }

#define RPG_GAMECORE_ITEMCOMPOSETAGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D792E50)
#define RPG_GAMECORE_ITEMCOMPOSETAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D792820)

namespace RPG::GameCore
{
	class ItemComposeTagRow : public ::System::Object
	{
	public:
		::System::String* TagTextmapID; // 0x10
		::System::UInt32 BelongTypeID; // 0x18
		::System::UInt32 ItemComposeTagID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ItemComposeTagRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ItemComposeTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ITEMCOMPOSETAGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
