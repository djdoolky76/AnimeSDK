#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ParamType.h"
#include "unitysdk/RPG/GameCore/RaidLimitType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RaidLimitConditionRow; }

#define RPG_GAMECORE_RAIDLIMITCONDITIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93C280)
#define RPG_GAMECORE_RAIDLIMITCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D93BAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidLimitConditionRow_TypeDefinitionIndex = 14595;

	class RaidLimitConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamIntList; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::RaidLimitType LimitType; // 0x1C
		::RPG::GameCore::ParamType ParamType; // 0x20
		::System::UInt32 ParamInt1; // 0x24
		::RPG::Client::TextID LimitDesc; // 0x28
		::System::UInt32 ParamInt2; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RaidLimitConditionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RaidLimitConditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RAIDLIMITCONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
