#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCAeonCrossRow; }

#define RPG_GAMECORE_ROGUEDLCAEONCROSSROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B4770)
#define RPG_GAMECORE_ROGUEDLCAEONCROSSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9B4580)

namespace RPG::GameCore
{
	class RogueDLCAeonCrossRow : public ::System::Object
	{
	public:
		::System::UInt32 MainAeonID; // 0x10
		::System::UInt32 BuffGroup; // 0x14
		::System::UInt32 SubAeonID; // 0x18
		::System::UInt32 SubAeonNum; // 0x1C
		::System::UInt32 MainAeonNum; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONCROSSROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCAeonCrossRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCAeonCrossRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCAEONCROSSROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
