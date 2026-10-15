#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomDynamicConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYERROOMDYNAMICCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90E0A0)
#define RPG_GAMECORE_PLAYERROOMDYNAMICCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D90DE00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRoomDynamicConfigRow_TypeDefinitionIndex = 14547;

	class PlayerRoomDynamicConfigRow : public ::System::Object
	{
	public:
		::System::String* PrefabPath; // 0x10
		::Il2CppArray<::System::UInt32>* DisplayTaglist; // 0x18
		::Il2CppArray<::System::UInt32>* Taglist; // 0x20
		::System::String* IconPath; // 0x28
		::System::UInt32 IsActivity; // 0x30
		::System::UInt32 ID; // 0x34
		::System::Boolean UseLowLight; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMDYNAMICCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerRoomDynamicConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerRoomDynamicConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMDYNAMICCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
