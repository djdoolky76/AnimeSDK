#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BackGroundMusicGroupType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BackGroundMusicGroupConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BACKGROUNDMUSICGROUPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4384A0)
#define RPG_GAMECORE_BACKGROUNDMUSICGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4382B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BackGroundMusicGroupConfigRow_TypeDefinitionIndex = 12815;

	class BackGroundMusicGroupConfigRow : public ::System::Object
	{
	public:
		::System::String* GroupIcon; // 0x10
		::RPG::Client::TextID GroupName; // 0x18
		::RPG::GameCore::BackGroundMusicGroupType Type; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICGROUPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BackGroundMusicGroupConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BackGroundMusicGroupConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BACKGROUNDMUSICGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
