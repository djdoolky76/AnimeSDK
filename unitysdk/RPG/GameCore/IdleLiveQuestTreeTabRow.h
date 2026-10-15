#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestTreeTabRow; }

#define RPG_GAMECORE_IDLELIVEQUESTTREETABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77E160)
#define RPG_GAMECORE_IDLELIVEQUESTTREETABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77DF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestTreeTabRow_TypeDefinitionIndex = 11733;

	class IdleLiveQuestTreeTabRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 UnlockChapter; // 0x18
		::System::UInt32 TabQuestID; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTTREETABROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveQuestTreeTabRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveQuestTreeTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTTREETABROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
