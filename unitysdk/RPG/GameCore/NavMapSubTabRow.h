#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NavMapSubTabRow; }
namespace System { class String; }

#define RPG_GAMECORE_NAVMAPSUBTABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8D4510)
#define RPG_GAMECORE_NAVMAPSUBTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8D3EE0)

namespace RPG::GameCore
{
	class NavMapSubTabRow : public ::System::Object
	{
	public:
		::System::String* UnlockConditionExpression; // 0x10
		::System::UInt32 FloorID; // 0x18
		::System::UInt32 MenuSortID; // 0x1C
		::System::UInt32 NavMapTabID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::NavMapSubTabRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NavMapSubTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NAVMAPSUBTABROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
