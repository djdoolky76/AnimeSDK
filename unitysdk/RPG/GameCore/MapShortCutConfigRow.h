#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MapShortCutType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapShortCutConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MAPSHORTCUTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D804530)
#define RPG_GAMECORE_MAPSHORTCUTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D803D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapShortCutConfigRow_TypeDefinitionIndex = 12572;

	class MapShortCutConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* Params; // 0x10
		::System::String* IconPath; // 0x18
		::System::UInt32 EntranceID; // 0x20
		::System::UInt32 UnlockID; // 0x24
		::System::UInt32 MappingInfoID; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 ID; // 0x40
		::RPG::GameCore::MapShortCutType Type; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSHORTCUTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapShortCutConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapShortCutConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPSHORTCUTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
