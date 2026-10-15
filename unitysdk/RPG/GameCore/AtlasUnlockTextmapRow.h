#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AtlasUnlockTextmapRow; }

#define RPG_GAMECORE_ATLASUNLOCKTEXTMAPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D401400)
#define RPG_GAMECORE_ATLASUNLOCKTEXTMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D401280)

namespace RPG::GameCore
{
	class AtlasUnlockTextmapRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID UnlockDesc; // 0x10
		::System::UInt32 UnlockID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATLASUNLOCKTEXTMAPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AtlasUnlockTextmapRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AtlasUnlockTextmapRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATLASUNLOCKTEXTMAPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
