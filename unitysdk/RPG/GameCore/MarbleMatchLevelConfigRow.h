#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleMatchLevelConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEMATCHLEVELCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB48430)
#define RPG_GAMECORE_MARBLEMATCHLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB481F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchLevelConfigRow_TypeDefinitionIndex = 11920;

	class MarbleMatchLevelConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonConfigPath; // 0x10
		::RPG::Client::TextID LevelDesc; // 0x18
		::System::UInt32 ID; // 0x28
		::System::UInt32 TutorialGroupID; // 0x2C
		::System::UInt32 TotalScore; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHLEVELCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleMatchLevelConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleMatchLevelConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEMATCHLEVELCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
