#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PamPlaceType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PamAnchorRow; }
namespace System { class String; }

#define RPG_GAMECORE_PAMANCHORROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8EBA70)
#define RPG_GAMECORE_PAMANCHORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8EB870)

namespace RPG::GameCore
{
	class PamAnchorRow : public ::System::Object
	{
	public:
		::System::String* AnchorName; // 0x10
		::System::String* AreaName; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::PamPlaceType PamPlaceType; // 0x24
		::System::UInt32 FloorID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMANCHORROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PamAnchorRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PamAnchorRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMANCHORROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
