#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAmphoreusCardRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D777C20)
#define RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D777820)

namespace RPG::GameCore
{
	class IdleLiveAmphoreusCardRow : public ::System::Object
	{
	public:
		::System::String* MiniIcon; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* Param; // 0x18
		::System::String* AbilityName; // 0x20
		::System::String* CardFigure; // 0x28
		::System::UInt32 TriggerNode; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::GameCore::GenderType GenderLimit; // 0x38
		::System::UInt32 TriggerChapter; // 0x3C
		::RPG::Client::TextID Name; // 0x40
		::RPG::Client::TextID Desc; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveAmphoreusCardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveAmphoreusCardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
