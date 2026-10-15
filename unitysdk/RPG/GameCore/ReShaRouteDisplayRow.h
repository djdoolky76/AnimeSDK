#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ReShaRouteDisplayRow; }
namespace System { class String; }

#define RPG_GAMECORE_RESHAROUTEDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D941AD0)
#define RPG_GAMECORE_RESHAROUTEDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D941210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ReShaRouteDisplayRow_TypeDefinitionIndex = 13827;

	class ReShaRouteDisplayRow : public ::System::Object
	{
	public:
		::System::String* HiddenRouteClearFloorSavedValueKey; // 0x10
		::System::String* HiddenRouteUnlockFloorSavedValueKey; // 0x18
		::System::String* AssistantImagePanelPrefab; // 0x20
		::System::String* RoutePanelPrefab; // 0x28
		::System::UInt32 ID; // 0x30
		::System::UInt32 AssistantItemID; // 0x34
		::RPG::Client::TextID NoClueHint; // 0x38
		::RPG::Client::TextID HintText; // 0x48
		::RPG::Client::TextID RouteName; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ReShaRouteDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ReShaRouteDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RESHAROUTEDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
