#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournKeywordRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNKEYWORDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3D7D0)
#define RPG_GAMECORE_ROGUETOURNKEYWORDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA3D520)

namespace RPG::GameCore
{
	class RogueTournKeywordRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RogueFormulaList; // 0x10
		::Il2CppArray<::System::UInt32>* MazeBuffList; // 0x18
		::System::String* KeywordIcon; // 0x20
		::System::UInt32 ExtraEffect; // 0x28
		::System::UInt32 KeywordBuffType; // 0x2C
		::System::UInt32 KeywordID; // 0x30
		::System::UInt32 MazeBuffID; // 0x34
		::System::UInt32 KeywordExtraEffect; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNKEYWORDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournKeywordRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournKeywordRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNKEYWORDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
