#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAeonStoryConfigRow; }

#define RPG_GAMECORE_ROGUEAEONSTORYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A8D50)
#define RPG_GAMECORE_ROGUEAEONSTORYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9A85F0)

namespace RPG::GameCore
{
	class RogueAeonStoryConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID AeonStory_Name; // 0x10
		::System::UInt32 ActivityModuleID; // 0x20
		::System::UInt32 UnlockID; // 0x24
		::RPG::Client::TextID AeonStory; // 0x28
		::System::UInt32 RogueAeonID; // 0x38
		::System::UInt32 AeonStoryID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONSTORYCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAeonStoryConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAeonStoryConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONSTORYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
