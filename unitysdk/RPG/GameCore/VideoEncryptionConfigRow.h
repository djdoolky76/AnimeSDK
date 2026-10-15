#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/VideoEncryptionMethod.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VideoEncryptionConfigRow; }

#define RPG_GAMECORE_VIDEOENCRYPTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC900B0)
#define RPG_GAMECORE_VIDEOENCRYPTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC8FF30)

namespace RPG::GameCore
{
	class VideoEncryptionConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::VideoEncryptionMethod EncryptionMethod; // 0x10
		::System::UInt32 VideoID; // 0x14
		::System::Boolean Encryption; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOENCRYPTIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::VideoEncryptionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VideoEncryptionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VIDEOENCRYPTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
