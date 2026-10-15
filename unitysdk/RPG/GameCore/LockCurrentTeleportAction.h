#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockCurrentTeleportAction; }
namespace System { class String; }

#define RPG_GAMECORE_LOCKCURRENTTELEPORTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7F08E0)
#define RPG_GAMECORE_LOCKCURRENTTELEPORTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7F08F0)
#define RPG_GAMECORE_LOCKCURRENTTELEPORTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7F08B0)

namespace RPG::GameCore
{
	class LockCurrentTeleportAction : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 PlaneID; // 0x18
		::System::UInt32 FloorID; // 0x1C
		::System::Boolean Enable; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* ToastTextString; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTTELEPORTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockCurrentTeleportAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockCurrentTeleportAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTTELEPORTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockCurrentTeleportAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockCurrentTeleportAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKCURRENTTELEPORTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
