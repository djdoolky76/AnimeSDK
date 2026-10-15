#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DirectDeliveryNoticeRow; }

#define RPG_GAMECORE_DIRECTDELIVERYNOTICEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D616980)
#define RPG_GAMECORE_DIRECTDELIVERYNOTICEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6167E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DirectDeliveryNoticeRow_TypeDefinitionIndex = 13146;

	class DirectDeliveryNoticeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RewardList; // 0x10
		::System::UInt32 UnlockQuestId; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::UInt32 ActivityModule; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIRECTDELIVERYNOTICEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DirectDeliveryNoticeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DirectDeliveryNoticeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIRECTDELIVERYNOTICEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
