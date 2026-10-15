#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicScepterDisplayRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A80A0)
#define RPG_GAMECORE_ROGUEMAGICSCEPTERDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9A7D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicScepterDisplayRow_TypeDefinitionIndex = 14882;

	class RogueMagicScepterDisplayRow : public ::System::Object
	{
	public:
		::System::String* ScepterFigurePath; // 0x10
		::System::String* ScepterIconPath; // 0x18
		::System::UInt32 ScepterID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ScepterName; // 0x28
		::RPG::Client::TextID ScepterBGDesc; // 0x38
		::RPG::Client::TextID ScepterTriggerDesc; // 0x48
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
