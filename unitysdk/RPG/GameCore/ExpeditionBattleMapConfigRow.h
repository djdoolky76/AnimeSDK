#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ExpeditionBattleMapConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_EXPEDITIONBATTLEMAPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC872C0)
#define RPG_GAMECORE_EXPEDITIONBATTLEMAPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1FC86FE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleMapConfigRow_TypeDefinitionIndex = 11493;

	class ExpeditionBattleMapConfigRow : public ::System::Object
	{
	public:
		::System::String* ExpeditionBackgroundPrefabPath; // 0x10
		::Il2CppArray<::System::UInt32>* RouteIDList; // 0x18
		::System::String* MapIconPath; // 0x20
		::System::String* ExpeditionBGM; // 0x28
		::RPG::Client::TextID MapName; // 0x30
		::System::UInt32 ID; // 0x40
		::System::UInt32 ActivityModuleID; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEMAPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ExpeditionBattleMapConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ExpeditionBattleMapConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EXPEDITIONBATTLEMAPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
