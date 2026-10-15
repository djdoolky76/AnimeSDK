#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ConsumeOrigamiItem; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SimpleTalkInfo; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_CONSUMEORIGAMIITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5ADAF0)
#define RPG_GAMECORE_CONSUMEORIGAMIITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5ADB00)
#define RPG_GAMECORE_CONSUMEORIGAMIITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5ADAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ConsumeOrigamiItem_TypeDefinitionIndex = 21866;

	class ConsumeOrigamiItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x18
		::RPG::Client::TextID Desc; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitConfirm; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSubmitCancel; // 0x38
		::RPG::GameCore::SimpleTalkInfo* SimpleTalk; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEORIGAMIITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConsumeOrigamiItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConsumeOrigamiItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEORIGAMIITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ConsumeOrigamiItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ConsumeOrigamiItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CONSUMEORIGAMIITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
