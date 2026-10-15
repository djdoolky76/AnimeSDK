#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeartDialEmoType.h"
#include "unitysdk/RPG/GameCore/HeartDialStepType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialBillboardRow; }

#define RPG_GAMECORE_HEARTDIALBILLBOARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D757420)
#define RPG_GAMECORE_HEARTDIALBILLBOARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D756E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialBillboardRow_TypeDefinitionIndex = 13728;

	class HeartDialBillboardRow : public ::System::Object
	{
	public:
		::System::UInt32 MapIconID; // 0x10
		::RPG::GameCore::HeartDialEmoType EmoType; // 0x14
		::RPG::GameCore::HeartDialStepType StepType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeartDialBillboardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeartDialBillboardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALBILLBOARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
