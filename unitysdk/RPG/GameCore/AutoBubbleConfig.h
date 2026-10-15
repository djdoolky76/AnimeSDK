#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AutoBubbleConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AUTOBUBBLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4098F0)
#define RPG_GAMECORE_AUTOBUBBLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D409700)

namespace RPG::GameCore
{
	class AutoBubbleConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EntityUniqueName; // 0x10
		::System::Single Duration; // 0x18
		::System::Single Offset; // 0x1C
		::System::UInt32 HitTextId; // 0x20
		::System::UInt32 MissTextId; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOBUBBLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AutoBubbleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AutoBubbleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AUTOBUBBLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
