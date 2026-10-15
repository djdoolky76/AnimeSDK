#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueTalkColorType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTalkNameColorRow; }

#define RPG_GAMECORE_ROGUETALKNAMECOLORROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA30620)
#define RPG_GAMECORE_ROGUETALKNAMECOLORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA2FDC0)

namespace RPG::GameCore
{
	class RogueTalkNameColorRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID TextmapID; // 0x10
		::RPG::GameCore::RogueTalkColorType Color; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLORROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTalkNameColorRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTalkNameColorRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETALKNAMECOLORROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
