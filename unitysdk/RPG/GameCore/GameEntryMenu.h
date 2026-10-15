#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PlaneType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameEntryMenu; }

#define RPG_GAMECORE_GAMEENTRYMENU_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E8900)
#define RPG_GAMECORE_GAMEENTRYMENU_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6E86B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameEntryMenu_TypeDefinitionIndex = 16458;

	class GameEntryMenu : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 MapID; // 0x10
		::System::UInt32 ButtonIndex; // 0x14
		::System::UInt32 PlaneID; // 0x18
		::System::UInt32 FloorID; // 0x1C
		::RPG::GameCore::PlaneType PlaneType; // 0x20
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* CharacterIDList; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTRYMENU_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameEntryMenu* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameEntryMenu*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEENTRYMENU_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
