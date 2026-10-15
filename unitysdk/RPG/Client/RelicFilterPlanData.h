#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AAMPBNNKEOK;
class GABKFNAJIDD;
namespace RPG::Client { class RelicFilterPlanData; }
namespace RPG::Client { class RelicFilterPlanIconData; }
namespace RPG::Client { class RelicFilterPlanSettingsData; }
namespace System { class String; }

#define RPG_CLIENT_RELICFILTERPLANDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0xDE722B0)
#define RPG_CLIENT_RELICFILTERPLANDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xDE72040)
#define RPG_CLIENT_RELICFILTERPLANDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDE721B0)
#define RPG_CLIENT_RELICFILTERPLANDATA_FILLTOSERVERDATA_OFFSET UNITYSDK_OFFSET(0xDE725D0)

namespace RPG::Client
{
	class RelicFilterPlanData : public ::System::Object
	{
	public:
		::RPG::Client::RelicFilterPlanIconData* Icon; // 0x10
		::System::String* Name; // 0x18
		::RPG::Client::RelicFilterPlanSettingsData* Settings; // 0x20
		::System::Boolean IsMarked; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 SlotIndex; // 0x2C
		::System::UInt32 AvatarIdOnCreate; // 0x30
		::System::Byte _padding1[0x4];
		::System::Int64 UpdateTimestamp; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::RelicFilterPlanData* Create()
		{
			return ((::RPG::Client::RelicFilterPlanData*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_CREATE_OFFSET))();
		}

		static ::RPG::Client::RelicFilterPlanData* Create_1(::GABKFNAJIDD* a1)
		{
			return ((::RPG::Client::RelicFilterPlanData*(*)(::GABKFNAJIDD*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_CREATE_1_OFFSET))(a1);
		}

		::System::Void FillToServerData(::AAMPBNNKEOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AAMPBNNKEOK*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICFILTERPLANDATA_FILLTOSERVERDATA_OFFSET))(this, a1);
		}

	};
}
