#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnhancedAdventurePlayerRow; }
namespace System { class String; }

#define RPG_GAMECORE_ENHANCEDADVENTUREPLAYERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D642FC0)
#define RPG_GAMECORE_ENHANCEDADVENTUREPLAYERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D642E20)

namespace RPG::GameCore
{
	class EnhancedAdventurePlayerRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MazeSkillIdList; // 0x10
		::System::String* PlayerJsonPath; // 0x18
		::System::UInt32 ID; // 0x20
		::System::UInt32 EnhancedID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDADVENTUREPLAYERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnhancedAdventurePlayerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnhancedAdventurePlayerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENHANCEDADVENTUREPLAYERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
