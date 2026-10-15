#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueArcadeTypeConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEARCADETYPECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A9FD0)
#define RPG_GAMECORE_ROGUEARCADETYPECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9A9790)

namespace RPG::GameCore
{
	class RogueArcadeTypeConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* PicPathList; // 0x10
		::System::UInt32 ArcadeID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID ExitDesc; // 0x20
		::RPG::Client::TextID BriefName; // 0x30
		::RPG::Client::TextID Desc; // 0x40
		::RPG::Client::TextID DetailedName; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueArcadeTypeConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueArcadeTypeConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEARCADETYPECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
