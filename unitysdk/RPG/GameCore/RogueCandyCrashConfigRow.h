#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCandyCrashConfigRow; }

#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9AF8D0)
#define RPG_GAMECORE_ROGUECANDYCRASHCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9AF210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCandyCrashConfigRow_TypeDefinitionIndex = 14678;

	class RogueCandyCrashConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RoundRange; // 0x10
		::System::UInt32 TotalRounds; // 0x18
		::System::UInt32 PrepareTime; // 0x1C
		::System::UInt32 ParamGroupID; // 0x20
		::System::UInt32 TotalTime; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCandyCrashConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCandyCrashConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECANDYCRASHCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
