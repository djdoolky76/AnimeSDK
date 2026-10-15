#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RogueNousDifficultyType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousDifficultyLevelRow; }

#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA22460)
#define RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA21D00)

namespace RPG::GameCore
{
	class RogueNousDifficultyLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList; // 0x10
		::System::UInt32 Tag; // 0x18
		::System::UInt32 DifficultyID; // 0x1C
		::RPG::GameCore::RogueNousDifficultyType DifficultyType; // 0x20
		::System::UInt32 Sort; // 0x24
		::RPG::Client::TextID DifficultyDesc; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousDifficultyLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousDifficultyLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSDIFFICULTYLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
