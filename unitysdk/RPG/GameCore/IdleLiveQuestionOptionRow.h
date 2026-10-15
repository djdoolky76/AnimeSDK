#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/IdleLiveQuestionOptionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveQuestionOptionRow; }
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEQUESTIONOPTIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D750AC0)
#define RPG_GAMECORE_IDLELIVEQUESTIONOPTIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D750810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveQuestionOptionRow_TypeDefinitionIndex = 11827;

	class IdleLiveQuestionOptionRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::Il2CppArray<::System::UInt32>* SpecialChatList; // 0x18
		::Il2CppArray<::System::UInt32>* GiftIDList; // 0x20
		::System::UInt32 ID; // 0x28
		::System::Single GiftDelayTime; // 0x2C
		::RPG::GameCore::IdleLiveQuestionOptionType Type; // 0x30
		::System::UInt32 SpineAnimGroupId; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONOPTIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveQuestionOptionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveQuestionOptionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEQUESTIONOPTIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
