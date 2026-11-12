#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/B51RacingSkillType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class B51RacingSkillRow; }
namespace System { class String; }

#define RPG_GAMECORE_B51RACINGSKILLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6555F0)
#define RPG_GAMECORE_B51RACINGSKILLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E655100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int B51RacingSkillRow_TypeDefinitionIndex = 10984;

	class B51RacingSkillRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* PassiveList; // 0x10
		::System::String* IconPath_128; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::System::UInt32>* PassiveParamList; // 0x28
		::RPG::Client::TextID Desc_Front; // 0x30
		::RPG::Client::TextID Desc; // 0x40
		::System::UInt32 ID; // 0x50
		::RPG::GameCore::B51RacingSkillType Type; // 0x54
		::RPG::Client::TextID Name; // 0x58
		::RPG::Client::TextID Desc_Back; // 0x68
		::System::UInt32 Level; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGSKILLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::B51RacingSkillRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::B51RacingSkillRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_B51RACINGSKILLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
