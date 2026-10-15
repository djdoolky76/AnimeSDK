#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/PixAirLockActionName.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PixAirLockActionConfigRow; }

#define RPG_GAMECORE_PIXAIRLOCKACTIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91C7E0)
#define RPG_GAMECORE_PIXAIRLOCKACTIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D91C510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PixAirLockActionConfigRow_TypeDefinitionIndex = 12174;

	class PixAirLockActionConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* PermissionIDArray; // 0x10
		::RPG::GameCore::PixAirLockActionName PermissionActionName; // 0x18
		::System::UInt32 NodeID; // 0x1C
		::System::UInt32 AreaID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TextHint; // 0x28
		::System::UInt32 ID; // 0x38
		::System::UInt32 StageID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRLOCKACTIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PixAirLockActionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PixAirLockActionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PIXAIRLOCKACTIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
