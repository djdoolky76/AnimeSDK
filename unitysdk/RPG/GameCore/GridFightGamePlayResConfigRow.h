#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightGamePlayResConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTGAMEPLAYRESCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7314B0)
#define RPG_GAMECORE_GRIDFIGHTGAMEPLAYRESCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7312F0)

namespace RPG::GameCore
{
	class GridFightGamePlayResConfigRow : public ::System::Object
	{
	public:
		::System::String* Desc; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* Name; // 0x20
		::System::UInt32 ID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGAMEPLAYRESCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightGamePlayResConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightGamePlayResConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTGAMEPLAYRESCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
