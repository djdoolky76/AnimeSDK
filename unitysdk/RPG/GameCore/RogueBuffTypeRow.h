#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueBuffTypeRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEBUFFTYPEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBF7A50)
#define RPG_GAMECORE_ROGUEBUFFTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EBF7200)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueBuffTypeRow_TypeDefinitionIndex = 14889;

	class RogueBuffTypeRow : public ::System::Object
	{
	public:
		::System::String* RogueBuffTypeIcon; // 0x10
		::Il2CppArray<::System::UInt32>* RugueBuffTypeRewardQuestList; // 0x18
		::RPG::Client::TextID RogueBuffTypeSubTitle; // 0x20
		::RPG::Client::TextID HintDesc; // 0x30
		::System::UInt32 RogueBuffDisplayGod; // 0x40
		::System::UInt32 RogueBuffType; // 0x44
		::RPG::Client::TextID RogueBuffTypeTextmapID; // 0x48
		::RPG::Client::TextID RogueBuffTypeTitle; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueBuffTypeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueBuffTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEBUFFTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
