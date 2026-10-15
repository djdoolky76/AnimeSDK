#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AtlasUnlockTextmapRow; }

#define RPG_GAMECORE_ATLASUNLOCKTEXTMAPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D3950)
#define RPG_GAMECORE_ATLASUNLOCKTEXTMAPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3D37D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AtlasUnlockTextmapRow_TypeDefinitionIndex = 12690;

	class AtlasUnlockTextmapRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID UnlockDesc; // 0x18
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
