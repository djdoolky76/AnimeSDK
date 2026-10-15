#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicScepterDisplayRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D5A00)
#define RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9D56E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicScepterDisplayRow_TypeDefinitionIndex = 14882;

	class RogueMagicScepterDisplayRow : public ::System::Object
	{
	public:
		::System::String* ScepterIconPath; // 0x10
		::System::String* ScepterFigurePath; // 0x18
		::RPG::Client::TextID ScepterBGDesc; // 0x20
		::System::UInt32 ScepterID; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ScepterTriggerDesc; // 0x38
		::RPG::Client::TextID ScepterName; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicScepterDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicScepterDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
