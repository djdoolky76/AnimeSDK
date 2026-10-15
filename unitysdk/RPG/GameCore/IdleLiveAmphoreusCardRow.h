#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GenderType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAmphoreusCardRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74A190)
#define RPG_GAMECORE_IDLELIVEAMPHOREUSCARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D749D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveAmphoreusCardRow_TypeDefinitionIndex = 11742;

	class IdleLiveAmphoreusCardRow : public ::System::Object
	{
	public:
		::System::String* CardFigure; // 0x10
		::System::String* MiniIcon; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* Param; // 0x20
		::System::String* AbilityName; // 0x28
		::RPG::Client::TextID Desc; // 0x30
		::System::UInt32 ID; // 0x40
		::System::UInt32 TriggerNode; // 0x44
		::RPG::Client::TextID Name; // 0x48
		::System::UInt32 TriggerChapter; // 0x58
		::RPG::GameCore::GenderType GenderLimit; // 0x5C
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
