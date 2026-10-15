#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AssistantShowCaseType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AssistantTipsShowCaseRow; }

#define RPG_GAMECORE_ASSISTANTTIPSSHOWCASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4010E0)
#define RPG_GAMECORE_ASSISTANTTIPSSHOWCASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D400F80)

namespace RPG::GameCore
{
	class AssistantTipsShowCaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TipsIDList; // 0x10
		::RPG::GameCore::AssistantShowCaseType ShowCase; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTANTTIPSSHOWCASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AssistantTipsShowCaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AssistantTipsShowCaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ASSISTANTTIPSSHOWCASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
