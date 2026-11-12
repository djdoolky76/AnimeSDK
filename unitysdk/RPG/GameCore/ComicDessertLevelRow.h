#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExtraLevelResultType.h"
#include "unitysdk/RPG/GameCore/SpecialGuestType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ComicDessertLevelRow; }
namespace System { class String; }

#define RPG_GAMECORE_COMICDESSERTLEVELROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DD110)
#define RPG_GAMECORE_COMICDESSERTLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7DCE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ComicDessertLevelRow_TypeDefinitionIndex = 11223;

	class ComicDessertLevelRow : public ::System::Object
	{
	public:
		::System::String* LevelConfigPath; // 0x10
		::Il2CppArray<::RPG::GameCore::SpecialGuestType>* SpecialGuestIDList; // 0x18
		::System::UInt32 ID; // 0x20
		::RPG::GameCore::ExtraLevelResultType ExtraLevelResultType; // 0x24
		::System::UInt32 RequiredCustomerCount; // 0x28
		::System::UInt32 RequiredCoin; // 0x2C
		::System::UInt32 TalkGroupID; // 0x30
		::System::UInt32 ExtraLevelResultID; // 0x34
		::System::UInt32 InstructionID; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTLEVELROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ComicDessertLevelRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ComicDessertLevelRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_COMICDESSERTLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
