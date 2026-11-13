#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeleportConfigRow; }

#define RPG_GAMECORE_TELEPORTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5C6880)
#define RPG_GAMECORE_TELEPORTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1F5C61E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeleportConfigRow_TypeDefinitionIndex = 12647;

	class TeleportConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ConfigID; // 0x10
		::System::UInt32 PlaneID; // 0x14
		::System::Boolean InitialEnable; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 FloorID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeleportConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeleportConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TELEPORTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
