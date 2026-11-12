#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarEnhancedHintRow; }

#define RPG_GAMECORE_AVATARENHANCEDHINTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6329C0)
#define RPG_GAMECORE_AVATARENHANCEDHINTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6325E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarEnhancedHintRow_TypeDefinitionIndex = 12857;

	class AvatarEnhancedHintRow : public ::System::Object
	{
	public:
		::System::UInt32 PreviewModuleID; // 0x10
		::System::UInt32 AvatarID; // 0x14
		::System::UInt32 SeasonID; // 0x18
		::System::UInt32 EnhancedDescNum; // 0x1C
		::System::UInt32 TrialStageID; // 0x20
		::System::UInt32 EnhancedID; // 0x24
		::RPG::Client::TextID EnhancedDesc3; // 0x28
		::RPG::Client::TextID EnhancedDesc1; // 0x38
		::RPG::Client::TextID EnhancedDesc2; // 0x48
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
