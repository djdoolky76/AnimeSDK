#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialFinishType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialConditionRow; }

#define RPG_GAMECORE_HEARTDIALCONDITIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96AF80)
#define RPG_GAMECORE_HEARTDIALCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E96AD90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialConditionRow_TypeDefinitionIndex = 13879;

	class HeartDialConditionRow : public ::System::Object
	{
	public:
		::RPG::GameCore::HeartDialFinishType FinishType; // 0x10
		::System::UInt32 ParamUint2; // 0x14
		::System::UInt32 ID; // 0x18
		::System::UInt32 ParamUint1; // 0x1C
		::System::UInt32 ParamUint3; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALCONDITIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeartDialConditionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeartDialConditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALCONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
