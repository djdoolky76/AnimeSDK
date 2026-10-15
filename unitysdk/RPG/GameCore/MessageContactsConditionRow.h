#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MessageContactsConditionRow; }

#define RPG_GAMECORE_MESSAGECONTACTSCONDITIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D848210)
#define RPG_GAMECORE_MESSAGECONTACTSCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8480D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageContactsConditionRow_TypeDefinitionIndex = 14477;

	class MessageContactsConditionRow : public ::System::Object
	{
	public:
		::System::UInt32 FakeContactID; // 0x10
		::System::UInt32 TruthMissionCondition; // 0x14
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCONDITIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MessageContactsConditionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MessageContactsConditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MESSAGECONTACTSCONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
