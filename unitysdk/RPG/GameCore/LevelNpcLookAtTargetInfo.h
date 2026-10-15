#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LevelNpcLookAtTargetType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelNpcLookAtTargetInfo; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELNPCLOOKATTARGETINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7BF690)
#define RPG_GAMECORE_LEVELNPCLOOKATTARGETINFO_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7B4B30)

namespace RPG::GameCore
{
	class LevelNpcLookAtTargetInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::LevelNpcLookAtTargetType TargetType; // 0x10
		::System::UInt32 GroupID; // 0x14
		::System::UInt32 InstanceID; // 0x18
		::System::Byte _padding0[0x4];
		::System::String* LookAtAttachPoint; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCLOOKATTARGETINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelNpcLookAtTargetInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelNpcLookAtTargetInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELNPCLOOKATTARGETINFO_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
