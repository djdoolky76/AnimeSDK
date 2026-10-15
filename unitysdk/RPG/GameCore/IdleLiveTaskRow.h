#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveTaskRow; }

#define RPG_GAMECORE_IDLELIVETASKROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7809E0)
#define RPG_GAMECORE_IDLELIVETASKROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7807E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveTaskRow_TypeDefinitionIndex = 11726;

	class IdleLiveTaskRow : public ::System::Object
	{
	public:
		::System::UInt32 FinishwayID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 RewardID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Desc; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETASKROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveTaskRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveTaskRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVETASKROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
