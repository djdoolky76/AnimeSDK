#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HeartDialDialogueRow; }

#define RPG_GAMECORE_HEARTDIALDIALOGUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7577D0)
#define RPG_GAMECORE_HEARTDIALDIALOGUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D757630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeartDialDialogueRow_TypeDefinitionIndex = 13718;

	class HeartDialDialogueRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ControlTalkList; // 0x10
		::System::UInt32 RewardID; // 0x18
		::System::UInt32 SubMissionID; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALDIALOGUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::HeartDialDialogueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HeartDialDialogueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HEARTDIALDIALOGUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
