#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEnhancedHintRow; }

#define RPG_GAMECORE_AVATARENHANCEDHINTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D8160)
#define RPG_GAMECORE_AVATARENHANCEDHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C2D7D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedHintRow_TypeDefinitionIndex = 12857;

	class AvatarEnhancedHintRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::UInt32 EnhancedDescNum; // 0x14
		::RPG::Client::TextID EnhancedDesc2; // 0x18
		::RPG::Client::TextID EnhancedDesc3; // 0x28
		::System::UInt32 TrialStageID; // 0x38
		::System::UInt32 SeasonID; // 0x3C
		::System::UInt32 PreviewModuleID; // 0x40
		::System::UInt32 EnhancedID; // 0x44
		::RPG::Client::TextID EnhancedDesc1; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDHINTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarEnhancedHintRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarEnhancedHintRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARENHANCEDHINTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
