#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConditionParam; }
namespace RPG::GameCore { class GameplayGuideDataConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED80190)
#define RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1ED7E7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameplayGuideDataConfigRow_TypeDefinitionIndex = 13447;

	class GameplayGuideDataConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* OverrideShowCondition; // 0x10
		::System::String* IconPath; // 0x18
		::Il2CppArray<::System::UInt32>* UnlockMission; // 0x20
		::System::String* TabIconPath; // 0x28
		::System::UInt32 MapEntranceID; // 0x30
		::System::UInt32 Order; // 0x34
		::System::UInt32 SubType; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::UInt32 RelatedID; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x48
		::System::UInt32 ShowItemAmount; // 0x58
		::System::UInt32 TabID; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameplayGuideDataConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameplayGuideDataConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMEPLAYGUIDEDATACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
