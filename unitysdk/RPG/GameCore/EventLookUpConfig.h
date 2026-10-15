#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EventLookUpConfig; }
namespace RPG::GameCore { class GroupLookUpConfig; }

#define RPG_GAMECORE_EVENTLOOKUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D653FF0)
#define RPG_GAMECORE_EVENTLOOKUPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D653E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EventLookUpConfig_TypeDefinitionIndex = 16388;

	class EventLookUpConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* Bank; // 0x18
		::Il2CppArray<::RPG::GameCore::GroupLookUpConfig*>* CondBank; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTLOOKUPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EventLookUpConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EventLookUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVENTLOOKUPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
