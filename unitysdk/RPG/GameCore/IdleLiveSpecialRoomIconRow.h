#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveSpecialRoomIconRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVESPECIALROOMICONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77FAF0)
#define RPG_GAMECORE_IDLELIVESPECIALROOMICONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77F9C0)

namespace RPG::GameCore
{
	class IdleLiveSpecialRoomIconRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPECIALROOMICONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveSpecialRoomIconRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveSpecialRoomIconRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVESPECIALROOMICONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
