#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/WaitBatchItemType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class WaitBatchItem; }
namespace System { class String; }

#define RPG_GAMECORE_WAITBATCHITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC94C60)
#define RPG_GAMECORE_WAITBATCHITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC94920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitBatchItem_TypeDefinitionIndex = 23759;

	class WaitBatchItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::WaitBatchItemType WaitType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* WaitTask; // 0x18
		::RPG::GameCore::DynamicString* CustomString; // 0x20
		::System::Boolean ResetWhenTaskBegin; // 0x28
		::System::Byte _padding1[0x7];
		::System::String* EventType; // 0x30
		::System::String* NotifyType; // 0x38
		::System::Boolean WaitOwnerOnly; // 0x40
		::System::Byte _padding2[0x7];
		::RPG::GameCore::PredicateConfig* Condition; // 0x48
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTrigger; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATCHITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitBatchItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitBatchItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITBATCHITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
