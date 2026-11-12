#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BackGroundMusicConfigRow; }

#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E658CC0)
#define RPG_GAMECORE_BACKGROUNDMUSICCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E658520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BackGroundMusicConfigRow_TypeDefinitionIndex = 12890;

	class BackGroundMusicConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID UnlockDesc; // 0x10
		::RPG::Client::TextID BGMDesc; // 0x20
		::RPG::Client::TextID MusicName; // 0x30
		::System::UInt32 GroupID; // 0x40
		::System::UInt32 ID; // 0x44
		::System::Boolean Unlock; // 0x48
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
