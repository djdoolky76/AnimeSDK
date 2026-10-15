#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimBaseEventAction; }
namespace RPG::GameCore { class FiveDimEventReceiverItem; }
namespace RPG::GameCore { class LittleGameEvent; }

#define RPG_GAMECORE_FIVEDIMEVENTRECEIVERITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BC300)
#define RPG_GAMECORE_FIVEDIMEVENTRECEIVERITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BC1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEventReceiverItem_TypeDefinitionIndex = 18633;

	class FiveDimEventReceiverItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LittleGameEvent*>* Events; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimBaseEventAction*>* Actions; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVENTRECEIVERITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEventReceiverItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEventReceiverItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEVENTRECEIVERITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
