#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirEnemyDisplayConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PIXAIRENEMYDISPLAYCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D919EA0)
#define RPG_GAMECORE_PIXAIRENEMYDISPLAYCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D919A50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirEnemyDisplayConfigRow_TypeDefinitionIndex = 12147;

	class PixAirEnemyDisplayConfigRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::System::String* EnemyIcon; // 0x18
		::System::UInt32 EnemyDisplayID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID EnemyDeadTalk; // 0x28
		::RPG::Client::TextID PlayerTrashTalk; // 0x38
		::RPG::Client::TextID EnemyDesc; // 0x48
		::RPG::Client::TextID EnemyName; // 0x58
		::RPG::Client::TextID EnemyTrashTalk; // 0x68
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
