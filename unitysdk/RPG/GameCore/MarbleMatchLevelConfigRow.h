#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleMatchLevelConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_MARBLEMATCHLEVELCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D813FC0)
#define RPG_GAMECORE_MARBLEMATCHLEVELCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D813D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleMatchLevelConfigRow_TypeDefinitionIndex = 11863;

	class MarbleMatchLevelConfigRow : public ::System::Object
	{
	public:
		::System::String* JsonConfigPath; // 0x10
		::System::UInt32 TotalScore; // 0x18
		::System::UInt32 TutorialGroupID; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID LevelDesc; // 0x28
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
