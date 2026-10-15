#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueManagerRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMANAGERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D9870)
#define RPG_GAMECORE_ROGUEMANAGERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9D9170)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueManagerRow_TypeDefinitionIndex = 14713;

	class RogueManagerRow : public ::System::Object
	{
	public:
		::System::String* EndTime; // 0x10
		::System::String* BeginTime; // 0x18
		::Il2CppArray<::System::UInt32>* RogueAreaIDList; // 0x20
		::System::UInt32 RogueSeason; // 0x28
		::System::UInt32 RogueVersion; // 0x2C
		::System::UInt32 ScheduleDataID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueManagerRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueManagerRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMANAGERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
