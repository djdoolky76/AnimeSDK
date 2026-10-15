#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueBuffCategory.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournBuffRow; }

#define RPG_GAMECORE_ROGUETOURNBUFFROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA329B0)
#define RPG_GAMECORE_ROGUETOURNBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA32090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournBuffRow_TypeDefinitionIndex = 15013;

	class RogueTournBuffRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x10
		::System::UInt32 MazeBuffLevel; // 0x18
		::System::UInt32 RogueBuffTag; // 0x1C
		::System::UInt32 RogueBuffType; // 0x20
		::System::UInt32 AeonID; // 0x24
		::System::UInt32 MazeBuffID; // 0x28
		::System::Boolean IsInHandbook; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 UnlockDisplay; // 0x30
		::RPG::GameCore::RogueBuffCategory RogueBuffCategory; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournBuffRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournBuffRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
