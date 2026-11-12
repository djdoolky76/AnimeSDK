#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomDynamicConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYERROOMDYNAMICCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB54B90)
#define RPG_GAMECORE_PLAYERROOMDYNAMICCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB548F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRoomDynamicConfigRow_TypeDefinitionIndex = 14702;

	class PlayerRoomDynamicConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DisplayTaglist; // 0x10
		::System::String* PrefabPath; // 0x18
		::System::String* IconPath; // 0x20
		::Il2CppArray<::System::UInt32>* Taglist; // 0x28
		::System::Boolean UseLowLight; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 ID; // 0x34
		::System::UInt32 IsActivity; // 0x38
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
