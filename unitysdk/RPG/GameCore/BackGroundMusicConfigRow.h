#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BackGroundMusicConfigRow; }

#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4382A0)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D437B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BackGroundMusicConfigRow_TypeDefinitionIndex = 12818;

	class BackGroundMusicConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BGMDesc; // 0x18
		::RPG::Client::TextID UnlockDesc; // 0x28
		::System::Boolean Unlock; // 0x38
		::System::Byte _padding1[0x3];
		::System::UInt32 ID; // 0x3C
		::RPG::Client::TextID MusicName; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BackGroundMusicConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BackGroundMusicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
