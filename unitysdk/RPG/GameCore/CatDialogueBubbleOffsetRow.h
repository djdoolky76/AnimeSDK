#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BubbleType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CatDialogueBubbleOffsetRow; }

#define RPG_GAMECORE_CATDIALOGUEBUBBLEOFFSETROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5581E0)
#define RPG_GAMECORE_CATDIALOGUEBUBBLEOFFSETROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D557FD0)

namespace RPG::GameCore
{
	class CatDialogueBubbleOffsetRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Single BubbleOffsetY; // 0x14
		::System::Single BubbleOffsetX; // 0x18
		::RPG::GameCore::BubbleType BubbleType; // 0x1C
		::System::Single BubbleOffsetZ; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CATDIALOGUEBUBBLEOFFSETROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::CatDialogueBubbleOffsetRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CatDialogueBubbleOffsetRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CATDIALOGUEBUBBLEOFFSETROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
