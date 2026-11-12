#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IconType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerIconConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYERICONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4E180)
#define RPG_GAMECORE_PLAYERICONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB4DA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerIconConfigRow_TypeDefinitionIndex = 14651;

	class PlayerIconConfigRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::System::UInt32 AvatarID; // 0x18
		::System::UInt32 SortType; // 0x1C
		::System::UInt32 Sort; // 0x20
		::System::UInt32 ID; // 0x24
		::RPG::GameCore::IconType Type; // 0x28
		::System::Boolean IsVisible; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerIconConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerIconConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
