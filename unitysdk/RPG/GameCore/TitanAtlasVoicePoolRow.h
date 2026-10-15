#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TitanAtlasVoicePoolRow; }
namespace System { class String; }

#define RPG_GAMECORE_TITANATLASVOICEPOOLROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8A780)
#define RPG_GAMECORE_TITANATLASVOICEPOOLROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB8A5F0)

namespace RPG::GameCore
{
	class TitanAtlasVoicePoolRow : public ::System::Object
	{
	public:
		::System::String* AudioEvent; // 0x10
		::System::UInt32 TitanVoicePoolID; // 0x18
		::System::UInt32 TitanVoiceID; // 0x1C
		::System::UInt32 Weight; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASVOICEPOOLROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TitanAtlasVoicePoolRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TitanAtlasVoicePoolRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TITANATLASVOICEPOOLROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
