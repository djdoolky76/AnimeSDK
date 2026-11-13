#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEnemyDisplayConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRENEMYDISPLAYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE5AD90)
#define RPG_GAMECORE_PIXAIRENEMYDISPLAYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE5A940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEnemyDisplayConfigRow_TypeDefinitionIndex = 12204;

	class PixAirEnemyDisplayConfigRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* EnemyIcon; // 0x18
		::RPG::Client::TextID EnemyName; // 0x20
		::RPG::Client::TextID EnemyDeadTalk; // 0x30
		::RPG::Client::TextID PlayerTrashTalk; // 0x40
		::System::UInt32 EnemyDisplayID; // 0x50
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EnemyTrashTalk; // 0x58
		::RPG::Client::TextID EnemyDesc; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRENEMYDISPLAYCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirEnemyDisplayConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirEnemyDisplayConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRENEMYDISPLAYCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
