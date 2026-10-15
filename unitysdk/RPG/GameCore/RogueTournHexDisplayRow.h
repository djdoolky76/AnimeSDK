#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournHexDisplayRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUETOURNHEXDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA3D260)
#define RPG_GAMECORE_ROGUETOURNHEXDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA3CFE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournHexDisplayRow_TypeDefinitionIndex = 15027;

	class RogueTournHexDisplayRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* FigureIconPath; // 0x18
		::System::UInt32 HexDisplayID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID BgDesc; // 0x28
		::RPG::Client::TextID Name; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXDISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournHexDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournHexDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNHEXDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
