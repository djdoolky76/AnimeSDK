#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FantasticStoryBuffSlotRow; }

#define RPG_GAMECORE_FANTASTICSTORYBUFFSLOTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D696A40)
#define RPG_GAMECORE_FANTASTICSTORYBUFFSLOTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D696950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FantasticStoryBuffSlotRow_TypeDefinitionIndex = 11469;

	class FantasticStoryBuffSlotRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockChapterID; // 0x10
		::System::UInt32 BuffSlotID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYBUFFSLOTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::FantasticStoryBuffSlotRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FantasticStoryBuffSlotRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FANTASTICSTORYBUFFSLOTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
